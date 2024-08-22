// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNATUREALIGNMENTTRACKERRESULT_H
#define SIGNATUREALIGNMENTTRACKERRESULT_H


#import <Foundation/Foundation.h>


@interface SignatureAlignmentTrackerResult : NSObject

@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) CGFloat queryEnd; // ivar: _queryEnd
@property (readonly, nonatomic) CGFloat queryStart; // ivar: _queryStart
@property (readonly, nonatomic) CGFloat referenceEnd; // ivar: _referenceEnd
@property (readonly, nonatomic) CGFloat referenceStart; // ivar: _referenceStart


-(id)initWithQueryStart:(CGFloat)arg0 queryEnd:(CGFloat)arg1 referenceStart:(CGFloat)arg2 referenceEnd:(CGFloat)arg3 confidence:(float)arg4 ;


@end


#endif