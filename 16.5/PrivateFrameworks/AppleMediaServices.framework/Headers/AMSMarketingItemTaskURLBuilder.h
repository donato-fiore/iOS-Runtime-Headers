// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMARKETINGITEMTASKURLBUILDER_H
#define AMSMARKETINGITEMTASKURLBUILDER_H

@class NSString;
@protocol AMSBagConsumer;

#import <Foundation/Foundation.h>


@interface AMSMarketingItemTaskURLBuilder : NSObject <AMSBagConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
-(id)_additionalQueryItems;
-(id)_countryCodeFromBag:(id)arg0 ;
-(id)_formattedURLPathWithBag:(id)arg0 ;
-(id)_languageTagFromBag:(id)arg0 fallback:(id)arg1 ;
-(id)_realmOverridesFromBag:(id)arg0 ;
-(id)_stringForKey:(id)arg0 fromBag:(id)arg1 ;
-(id)_urlPathFromBag:(id)arg0 ;
-(id)urlWithServiceType:(id)arg0 placement:(id)arg1 bag:(id)arg2 hydrateRelatedContents:(BOOL)arg3 offerHints:(id)arg4 additionalParameters:(id)arg5 ;


@end


#endif