// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCTVREMOTEPAYLOAD_H
#define MCTVREMOTEPAYLOAD_H

@class NSArray;


#import "MCPayload.h"

@interface MCTVRemotePayload : MCPayload

@property (retain, nonatomic) NSArray *allowedRemotes; // ivar: _allowedRemotes
@property (readonly, nonatomic) NSArray *allowedTVIDs; // ivar: _allowedTVIDs
@property (readonly, nonatomic) NSArray *allowedTVNames; // ivar: _allowedTVNames
@property (retain, nonatomic) NSArray *allowedTVs; // ivar: _allowedTVs


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)restrictions;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)verboseDescription;


@end


#endif