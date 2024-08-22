// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHICONDRAGAUTOSCROLLASSISTANT_H
#define SBHICONDRAGAUTOSCROLLASSISTANT_H

@class CADisplayLink, UIView;
@protocol UIDropSession, SBHIconDragAutoScrollAssistantDelegate;

#import <Foundation/Foundation.h>


@interface SBHIconDragAutoScrollAssistant : NSObject {
    CADisplayLink *_displayLink;
    CGFloat _lastTimestamp;
    BOOL _started;
    CGPoint _location;
}


@property (retain, nonatomic) NSObject<UIDropSession> *activeDropSession; // ivar: _activeDropSession
@property (weak, nonatomic) NSObject<SBHIconDragAutoScrollAssistantDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIView *referenceView; // ivar: _referenceView


-(NSInteger)_autoScrollDirectionForLocation:(struct CGPoint )arg0 ;
-(id)initWithDelegate:(id)arg0 referenceView:(id)arg1 ;
-(struct CGPoint )_currentLocation;
-(void)_displayLinkFired:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif