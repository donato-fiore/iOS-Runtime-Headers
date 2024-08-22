// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELPLAYBACKPOSITION_H
#define MPMODELPLAYBACKPOSITION_H

@class NSNumber, NSString;


#import "MPModelObject.h"

@interface MPModelPlaybackPosition : MPModelObject

@property (nonatomic) CGFloat bookmarkTime;
@property (nonatomic) BOOL hasBeenPlayed;
@property (nonatomic) BOOL shouldRememberBookmarkTime;
@property (nonatomic) CGFloat startTime;
@property (copy, nonatomic) NSNumber *stopTime;
@property (copy, nonatomic) NSString *storeUbiquitousIdentifier;
@property (nonatomic) NSInteger userPlayCount;




@end


#endif