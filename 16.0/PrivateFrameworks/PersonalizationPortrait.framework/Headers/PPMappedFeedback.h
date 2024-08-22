// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPMAPPEDFEEDBACK_H
#define PPMAPPEDFEEDBACK_H



#import "PPBaseFeedback.h"

@interface PPMappedFeedback : PPBaseFeedback



-(id)initWithExplicitlyEngagedString:(id)arg0 mappingId:(id)arg1 ;
-(id)initWithExplicitlyEngagedStrings:(id)arg0 explicitlyRejectedStrings:(id)arg1 implicitlyEngagedStrings:(id)arg2 implicitlyRejectedStrings:(id)arg3 mappingId:(id)arg4 ;
-(id)initWithExplicitlyEngagedStrings:(id)arg0 explicitlyRejectedStrings:(id)arg1 implicitlyEngagedStrings:(id)arg2 implicitlyRejectedStrings:(id)arg3 offeredStrings:(id)arg4 mappingId:(id)arg5 ;
-(id)initWithExplicitlyEngagedStrings:(id)arg0 implicitlyEngagedStrings:(id)arg1 offeredStrings:(id)arg2 mappingId:(id)arg3 ;
-(id)initWithExplicitlyRejectedString:(id)arg0 mappingId:(id)arg1 ;
-(id)initWithImplicitlyEngagedString:(id)arg0 mappingId:(id)arg1 ;
-(id)initWithImplicitlyRejectedString:(id)arg0 mappingId:(id)arg1 ;
-(id)initWithOfferedString:(id)arg0 mappingId:(id)arg1 ;


@end


#endif