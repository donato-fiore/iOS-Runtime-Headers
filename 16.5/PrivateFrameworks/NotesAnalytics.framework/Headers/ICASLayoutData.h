// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASLAYOUTDATA_H
#define ICASLAYOUTDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASLayoutType.h"

@interface ICASLayoutData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *isTimelineView; // ivar: _isTimelineView
@property (readonly, nonatomic) ICASLayoutType *layoutType; // ivar: _layoutType


+(id)dataName;
-(id)initWithLayoutType:(id)arg0 isTimelineView:(id)arg1 ;
-(id)toDict;


@end


#endif