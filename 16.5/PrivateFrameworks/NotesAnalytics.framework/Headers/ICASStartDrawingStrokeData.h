// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSTARTDRAWINGSTROKEDATA_H
#define ICASSTARTDRAWINGSTROKEDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASStartDrawingStrokeData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *startFingerStrokeCount; // ivar: _startFingerStrokeCount
@property (readonly, nonatomic) NSNumber *startPencilStrokeCount; // ivar: _startPencilStrokeCount


+(id)dataName;
-(id)initWithStartPencilStrokeCount:(id)arg0 startFingerStrokeCount:(id)arg1 ;
-(id)toDict;


@end


#endif