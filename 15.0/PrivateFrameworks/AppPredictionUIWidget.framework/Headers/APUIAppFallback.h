// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APUIAPPFALLBACK_H
#define APUIAPPFALLBACK_H

@class NSString, ATXProactiveSuggestion;

#import <Foundation/Foundation.h>


@interface APUIAppFallback : NSObject

@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) ATXProactiveSuggestion *suggestion; // ivar: _suggestion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAPUIAppFallback:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithBundleId:(id)arg0 ;
-(id)initWithProactiveSuggestion:(id)arg0 ;


@end


#endif