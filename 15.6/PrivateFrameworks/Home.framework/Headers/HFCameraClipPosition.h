// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCAMERACLIPPOSITION_H
#define HFCAMERACLIPPOSITION_H

@class HMCameraClip, NSDate, NSString;
@protocol NAIdentifiable, NSCopying, HFCameraRecordingEvent;

#import <Foundation/Foundation.h>


@interface HFCameraClipPosition : NSObject <NAIdentifiable, NSCopying>



@property (readonly, nonatomic) HMCameraClip *clip;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<HFCameraRecordingEvent> *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat offset; // ivar: _offset
@property (readonly) Class superclass;


+(id)na_identity;
+(id)positionWithClip:(id)arg0 offset:(CGFloat)arg1 ;
+(id)positionWithEvent:(id)arg0 offset:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClip:(id)arg0 offset:(CGFloat)arg1 ;
-(id)initWithEvent:(id)arg0 offset:(CGFloat)arg1 ;


@end


#endif