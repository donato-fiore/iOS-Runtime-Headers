// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCAIRPLAYPAYLOAD_H
#define MCAIRPLAYPAYLOAD_H

@class NSArray;


#import "MCPayload.h"

@interface MCAirPlayPayload : MCPayload

@property (retain, nonatomic) NSArray *allowListDestinations; // ivar: _allowListDestinations
@property (retain, nonatomic) NSArray *destinationsWithPasswords; // ivar: _destinationsWithPasswords
@property (retain, nonatomic) NSArray *titlesAndDescriptions; // ivar: _titlesAndDescriptions


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)verboseDescription;


@end


#endif