// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSCROLLDETECTOR_H
#define SKSCROLLDETECTOR_H

@class NSMutableArray;
@protocol SKScreenTrackingDelegate;

#import <Foundation/Foundation.h>


@interface SKScrollDetector : NSObject

@property (weak, nonatomic) NSObject<SKScreenTrackingDelegate> *screenTrakingDelegate; // ivar: _screenTrakingDelegate
@property (retain, nonatomic) NSMutableArray *subscribedScrollers; // ivar: _subscribedScrollers


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)findAndListenForScrollingOfView:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)stopListeningForScrollingOfView:(id)arg0 ;


@end


#endif