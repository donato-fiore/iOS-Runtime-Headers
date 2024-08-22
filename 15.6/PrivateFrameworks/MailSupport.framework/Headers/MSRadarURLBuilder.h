// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSRADARURLBUILDER_H
#define MSRADARURLBUILDER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MSRadarURLBuilder : NSObject

@property (nonatomic) BOOL appendStandardDisclaimerToDescription; // ivar: _appendStandardDisclaimerToDescription
@property (nonatomic) BOOL appendSysdiagnoseHowTo; // ivar: _appendSysdiagnoseHowTo
@property (nonatomic) NSInteger classification; // ivar: _classification
@property (nonatomic) NSInteger component; // ivar: _component
@property (copy, nonatomic) NSArray *extensionIdentifiers; // ivar: _extensionIdentifiers
@property (nonatomic) BOOL prependSystemVersionToTitle; // ivar: _prependSystemVersionToTitle
@property (copy, nonatomic) NSString *radarDescription; // ivar: _radarDescription
@property (nonatomic) NSInteger reproducibility; // ivar: _reproducibility
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)canOpenRadar;
+(id)_URLFromQueryItems:(id)arg0 builder:(id)arg1 ;
+(id)_componentInfoDictionaryFromComponent:(NSInteger)arg0 ;
+(id)componentIDFromRadarComponent:(NSInteger)arg0 ;
+(id)componentNameFromRadarComponent:(NSInteger)arg0 ;
+(id)radarURLWithBuilder:(id)arg0 ;
+(id)stringFromRadarClassification:(NSInteger)arg0 ;
+(id)stringFromRadarReproducibility:(NSInteger)arg0 ;
-(id)init;


@end


#endif