// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCCELLULARPAYLOAD_H
#define MCCELLULARPAYLOAD_H

@class NSArray;


#import "MCPayload.h"
#import "MCAPNConfiguration.h"

@interface MCCellularPayload : MCPayload

@property (retain, nonatomic) NSArray *APNs; // ivar: _APNs
@property (retain, nonatomic) MCAPNConfiguration *attachAPN; // ivar: _attachAPN


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)APNConfigurationDescription;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)installationWarnings;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)verboseDescription;


@end


#endif