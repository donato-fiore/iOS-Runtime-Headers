// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMFALLDETECTIONEVENT_H
#define CMFALLDETECTIONEVENT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface CMFallDetectionEvent : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSInteger resolution; // ivar: _resolution


-(id)initWithAnomalyEvent:(id)arg0 ;
-(id)initWithResolution:(NSInteger)arg0 date:(id)arg1 ;
-(void)dealloc;


@end


#endif