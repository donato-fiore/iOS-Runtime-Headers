// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAFSERIALIZATION_H
#define AAFSERIALIZATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface AAFSerialization : NSObject {
    NSDictionary *_serializersByType;
}




+(id)dataFromDictionary:(id)arg0 ofType:(id)arg1 ;
+(id)dictionaryFromObject:(id)arg0 ofType:(id)arg1 ;
+(id)instance;
+(id)ofType:(id)arg0 ;
+(id)stringFromDictionary:(id)arg0 ofType:(id)arg1 ;
-(id)init;
-(id)serializerOfType:(id)arg0 ;
-(void)addSerializer:(id)arg0 ;


@end


#endif