// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMKEYVALUECOLLECTIONDICTIONARYSTORAGE_H
#define IMKEYVALUECOLLECTIONDICTIONARYSTORAGE_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol IMKeyValueCollectionStorage;

#import <Foundation/Foundation.h>


@interface IMKeyValueCollectionDictionaryStorage : NSObject <IMKeyValueCollectionStorage>

 {
    NSMutableDictionary *_dictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif