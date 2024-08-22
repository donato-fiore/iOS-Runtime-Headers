// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASENDDRAWINGSTROKEDATA_H
#define ICASENDDRAWINGSTROKEDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASEndDrawingStrokeData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *endFingerStrokeCount; // ivar: _endFingerStrokeCount
@property (readonly, nonatomic) NSNumber *endPencilStrokeCount; // ivar: _endPencilStrokeCount


+(id)dataName;
-(id)initWithEndPencilStrokeCount:(id)arg0 endFingerStrokeCount:(id)arg1 ;
-(id)toDict;


@end


#endif