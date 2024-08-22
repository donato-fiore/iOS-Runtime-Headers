// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLFPHONEFACETIMESETTINGS_H
#define CLFPHONEFACETIMESETTINGS_H

@class NSString;


#import "CLFBaseSettings.h"

@interface CLFPhoneFaceTimeSettings : CLFBaseSettings

@property (nonatomic) BOOL dialerKeypadEnabled;
@property (nonatomic) BOOL inCallKeypadEnabled;
@property (retain, nonatomic) NSString *incomingCommunicationLimit;
@property (nonatomic) BOOL recentsEnabled;
@property (nonatomic) BOOL speakerOptionEnabled;


+(id)allPreferenceSelectorsAsStrings;
+(id)domainName;
+(id)sharedInstance;
-(id)init;


@end


#endif