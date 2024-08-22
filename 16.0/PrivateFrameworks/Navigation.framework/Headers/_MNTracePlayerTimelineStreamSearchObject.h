// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MNTRACEPLAYERTIMELINESTREAMSEARCHOBJECT_H
#define _MNTRACEPLAYERTIMELINESTREAMSEARCHOBJECT_H

@class NSString;
@protocol MNTracePlayerTimelineStreamObjectType;

#import <Foundation/Foundation.h>


@interface _MNTracePlayerTimelineStreamSearchObject : NSObject <MNTracePlayerTimelineStreamObjectType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat position; // ivar: _position
@property (readonly) Class superclass;


-(id)initWithPosition:(CGFloat)arg0 ;


@end


#endif