// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIREFRAMEKEYFRAME_H
#define PIREFRAMEKEYFRAME_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PIReframeKeyframe : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) ? homography; // ivar: _homography
@property (readonly, nonatomic) ? time; // ivar: _time


+(id)keyframesFromDictionaryRepresentations:(id)arg0 ;
-(id)description;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithTime:(struct ? )arg0 homography:(struct ? )arg1 ;


@end


#endif