// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDRESULTTRACKER_H
#define DDRESULTTRACKER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface DDResultTracker : NSObject {
    unsigned int countRemainingByCategory;
    BOOL sortByProximity;
    NSUInteger referenceResultLocation;
    ? existingAddressResult;
    NSMutableArray *resultsBefore;
    NSMutableArray *resultsAfter;
    ? referenceResult;
}


@property NSUInteger maximumDistance; // ivar: maximumDistance
@property NSUInteger maximumDistanceForEmails; // ivar: maximumDistanceForEmails
@property (readonly) unsigned int totalCountRemaining; // ivar: totalCountRemaining


-(?)addResultIfAppropriate:(?)arg0 referenceDatereferenceTimeZone;
-(?)initWithReferenceResult;
-(id)results;
-(void)dealloc;


@end


#endif