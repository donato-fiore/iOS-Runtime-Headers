// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSTOREIDENTIFIER_H
#define MTSTOREIDENTIFIER_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MTStoreIdentifier : NSObject

@property (retain, nonatomic) NSString *feedUrl; // ivar: _feedUrl
@property (retain, nonatomic) NSNumber *storeIdentifier; // ivar: _storeIdentifier


+(BOOL)isEmpty:(NSInteger)arg0 ;
+(BOOL)isEmptyNumber:(id)arg0 ;
+(BOOL)isNotEmpty:(NSInteger)arg0 ;
+(BOOL)isNotEmptyNumber:(id)arg0 ;
+(NSInteger)adamIdFromSerpentId:(NSInteger)arg0 ;
+(NSInteger)serpentIdFromAdamId:(NSInteger)arg0 ;
+(id)adamIdNumberFromStoreId:(NSInteger)arg0 ;
+(id)identifierWithFeedUrl:(id)arg0 ;
+(id)identifierWithFeedUrl:(id)arg0 storeIdentifier:(id)arg1 ;
+(id)validatedIdNumberFromStoreId:(NSInteger)arg0 ;
-(id)initWithFeedUrl:(id)arg0 ;
-(id)initWithFeedUrl:(id)arg0 storeIdentifier:(id)arg1 ;


@end


#endif