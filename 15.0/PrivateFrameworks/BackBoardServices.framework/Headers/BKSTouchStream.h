// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSTOUCHSTREAM_H
#define BKSTOUCHSTREAM_H


#import <Foundation/Foundation.h>


@interface BKSTouchStream : NSObject

@property unsigned int reference; // ivar: _reference


-(id)initWithContextID:(unsigned int)arg0 displayUUID:(id)arg1 identifier:(unsigned char)arg2 policy:(id)arg3 ;
-(void)invalidate;
-(void)setEventDispatchMode:(unsigned char)arg0 ambiguityRecommendation:(unsigned char)arg1 lastTouchTimestamp:(CGFloat)arg2 ;
-(void)setEventDispatchMode:(unsigned char)arg0 lastTouchTimestamp:(CGFloat)arg1 ;


@end


#endif