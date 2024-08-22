// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLFILESYSTEMPERSISTENCEATTRIBUTES_H
#define PLFILESYSTEMPERSISTENCEATTRIBUTES_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PLFileSystemPersistenceAttributes : NSObject {
    NSDictionary *_attributes;
    NSDictionary *_unknownAttributes;
}




-(BOOL)getInt32:(*int)arg0 forKey:(id)arg1 ;
-(BOOL)getUInt16:(*unsigned short)arg0 forKey:(id)arg1 ;
-(BOOL)getUInt64:(*NSUInteger)arg0 forKey:(id)arg1 ;
-(id)UUIDStringForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)description;
-(id)initWithAttributes:(id)arg0 unknownAttributes:(id)arg1 ;
-(id)stringForKey:(id)arg0 ;
-(void)dealloc;


@end


#endif