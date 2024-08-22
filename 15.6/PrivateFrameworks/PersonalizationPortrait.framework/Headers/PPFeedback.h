// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPFEEDBACK_H
#define PPFEEDBACK_H



#import "PPBaseFeedback.h"

@interface PPFeedback : PPBaseFeedback



-(id)initWithExplicitlyEngagedString:(id)arg0 ;
-(id)initWithExplicitlyEngagedStrings:(id)arg0 explicitlyRejectedStrings:(id)arg1 implicitlyEngagedStrings:(id)arg2 implicitlyRejectedStrings:(id)arg3 ;
-(id)initWithExplicitlyEngagedStrings:(id)arg0 explicitlyRejectedStrings:(id)arg1 implicitlyEngagedStrings:(id)arg2 implicitlyRejectedStrings:(id)arg3 offeredStrings:(id)arg4 ;
-(id)initWithExplicitlyEngagedStrings:(id)arg0 implicitlyEngagedStrings:(id)arg1 offeredStrings:(id)arg2 ;
-(id)initWithExplicitlyRejectedString:(id)arg0 ;
-(id)initWithImplicitlyEngagedString:(id)arg0 ;
-(id)initWithImplicitlyRejectedString:(id)arg0 ;
-(id)initWithOfferedString:(id)arg0 ;


@end


#endif