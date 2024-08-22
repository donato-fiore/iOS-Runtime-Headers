// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKOVERLAYAPPCLIPCONFIGURATION_H
#define SKOVERLAYAPPCLIPCONFIGURATION_H

@class ASOOverlayAppClipConfiguration, NSString;


#import "SKOverlayConfiguration.h"

@interface SKOverlayAppClipConfiguration : SKOverlayConfiguration

@property (readonly, retain, nonatomic) ASOOverlayAppClipConfiguration *_backing;
@property (retain, nonatomic) NSString *campaignToken;
@property (retain, nonatomic) NSString *customProductPageIdentifier;
@property (retain, nonatomic) NSString *latestReleaseID;
@property (nonatomic) NSInteger position;
@property (retain, nonatomic) NSString *providerToken;


-(id)_init;
-(id)additionalValueForKey:(id)arg0 ;
-(id)initWithBacking:(id)arg0 ;
-(id)initWithPosition:(NSInteger)arg0 ;
-(void)setAdditionalValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif