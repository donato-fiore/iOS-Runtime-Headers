// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKOVERLAYAPPCONFIGURATION_H
#define SKOVERLAYAPPCONFIGURATION_H

@class ASOOverlayAppConfiguration, NSString;


#import "SKOverlayConfiguration.h"

@interface SKOverlayAppConfiguration : SKOverlayConfiguration

@property (readonly, retain, nonatomic) ASOOverlayAppConfiguration *_backing;
@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) NSString *campaignToken;
@property (retain, nonatomic) NSString *customProductPageIdentifier;
@property (retain, nonatomic) NSString *latestReleaseID;
@property (nonatomic) NSInteger position;
@property (retain, nonatomic) NSString *providerToken;
@property (nonatomic) BOOL userDismissible;


-(id)_init;
-(id)additionalValueForKey:(id)arg0 ;
-(id)initWithAppIdentifier:(id)arg0 position:(NSInteger)arg1 ;
-(id)initWithBacking:(id)arg0 ;
-(void)setAdditionalValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif