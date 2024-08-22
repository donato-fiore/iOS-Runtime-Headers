// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPOSTPURCHASEONBOARDINGCONFIGURATION_H
#define FCPOSTPURCHASEONBOARDINGCONFIGURATION_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface FCPostPurchaseOnboardingConfiguration : NSObject

@property (copy, nonatomic) NSString *callToActionText; // ivar: _callToActionText
@property (copy, nonatomic) NSURL *deepLinkURL; // ivar: _deepLinkURL
@property (copy, nonatomic) NSString *landingPageArticleID; // ivar: _landingPageArticleID
@property (nonatomic) NSUInteger postPurchaseOnboardingStep; // ivar: _postPurchaseOnboardingStep


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithPostPurchaseOnboardingStep:(NSUInteger)arg0 landingPageArticleID:(id)arg1 callToActionText:(id)arg2 deepLinkURL:(id)arg3 ;


@end


#endif