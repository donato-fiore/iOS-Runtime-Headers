// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASHISTOGRAMITEMDATA_H
#define ICASHISTOGRAMITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASHistogramItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *count; // ivar: _count
@property (readonly, nonatomic) NSNumber *leftBound; // ivar: _leftBound
@property (readonly, nonatomic) NSNumber *rightBound; // ivar: _rightBound


+(id)dataName;
-(id)initWithLeftBound:(id)arg0 rightBound:(id)arg1 count:(id)arg2 ;
-(id)toDict;


@end


#endif