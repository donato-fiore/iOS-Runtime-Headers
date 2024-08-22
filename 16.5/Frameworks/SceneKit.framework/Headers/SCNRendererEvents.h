// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNRENDEREREVENTS_H
#define SCNRENDEREREVENTS_H

@protocol MTLEvent;

#import <Foundation/Foundation.h>


@interface SCNRendererEvents : NSObject

@property (retain, nonatomic) NSObject<MTLEvent> *signalEvent; // ivar: _signalEvent
@property (nonatomic) NSUInteger signalFrame; // ivar: _signalFrame
@property (retain, nonatomic) NSObject<MTLEvent> *waitEvent; // ivar: _waitEvent
@property (nonatomic) NSUInteger waitFrame; // ivar: _waitFrame


-(void)dealloc;
-(void)signalAfterSubmittingRender:(id)arg0 ;
-(void)waitBeforeSubmittingRender:(id)arg0 ;


@end


#endif