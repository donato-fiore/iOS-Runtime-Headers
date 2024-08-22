// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSEGMENTCALLHISTORY_H
#define VCSEGMENTCALLHISTORY_H


#import <Foundation/Foundation.h>


@interface VCSegmentCallHistory : NSObject

@property (readonly) int historyLength; // ivar: _historyLength
@property (readonly) int longTermAdjustmentTBR; // ivar: _longTermAdjustmentTBR
@property (readonly) int longTermBWE; // ivar: _longTermBWE
@property (readonly) int longTermISBR; // ivar: _longTermISBR
@property (readonly) int longTermSARBR; // ivar: _longTermSARBR
@property (readonly) int longTermSATXBR; // ivar: _longTermSATXBR
@property (readonly) int previousISBR; // ivar: _previousISBR
@property (readonly) int shortTermAdjustmentTBR; // ivar: _shortTermAdjustmentTBR
@property (readonly) int shortTermBWE; // ivar: _shortTermBWE
@property (readonly) int shortTermISBR; // ivar: _shortTermISBR
@property (readonly) int shortTermSARBR; // ivar: _shortTermSARBR
@property (readonly) int shortTermSATXBR; // ivar: _shortTermSATXBR


+(int)fieldSize;
-(id)init;
-(int)deserialize:(*int)arg0 ;
-(int)serialize:(*int)arg0 ;
-(void)updateSegmentWithTBR:(int)arg0 ISBTR:(int)arg1 SATXBR:(int)arg2 SARBR:(int)arg3 BWE:(int)arg4 shortTermWeight:(CGFloat)arg5 longTermWeight:(CGFloat)arg6 ;


@end


#endif