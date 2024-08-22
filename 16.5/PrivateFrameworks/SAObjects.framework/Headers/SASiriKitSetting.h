// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASIRIKITSETTING_H
#define SASIRIKITSETTING_H

@class NSString, NSArray;
@protocol SABackgroundContextObject;


#import "AceObject.h"

@interface SASiriKitSetting : AceObject <SABackgroundContextObject>



@property (nonatomic) BOOL applySASToFirstPartyDomains;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *listOfSiriKitEnabledDomains;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useSASAutoSelectionFeature;


+(id)siriKitSetting;
+(id)siriKitSettingWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif