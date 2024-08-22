// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKDAYOCCURRENCESTATECACHEDLOCATION_H
#define EKDAYOCCURRENCESTATECACHEDLOCATION_H

@class NSAttributedString, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface EKDayOccurrenceStateCachedLocation : NSObject

@property (readonly, nonatomic) NSAttributedString *generatedLocationString; // ivar: _generatedLocationString
@property (readonly, nonatomic) NSURL *originalConferenceURL; // ivar: _originalConferenceURL
@property (readonly, nonatomic) BOOL originalHasNewTimeProposed; // ivar: _originalHasNewTimeProposed
@property (readonly, nonatomic) NSString *originalOccurrenceLocation; // ivar: _originalOccurrenceLocation
@property (readonly, nonatomic) BOOL originalOccurrenceLocationIsPrediction; // ivar: _originalOccurrenceLocationIsPrediction
@property (readonly, nonatomic) NSString *originalOccurrenceLocationWithoutPrediction; // ivar: _originalOccurrenceLocationWithoutPrediction


-(id)initWithGeneratedLocationString:(id)arg0 originalOccurrenceLocation:(id)arg1 originalOccurrenceLocationWithoutPrediction:(id)arg2 originalOccurrenceLocationIsPrediction:(BOOL)arg3 originalHasNewTimeProposed:(BOOL)arg4 originalConferenceURL:(id)arg5 ;


@end


#endif