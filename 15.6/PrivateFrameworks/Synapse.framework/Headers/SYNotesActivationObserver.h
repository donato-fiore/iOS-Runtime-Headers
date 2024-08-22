// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYNOTESACTIVATIONOBSERVER_H
#define SYNOTESACTIVATIONOBSERVER_H

@class FBSDisplayLayoutMonitor;

#import <Foundation/Foundation.h>


@interface SYNotesActivationObserver : NSObject

@property (retain, nonatomic) FBSDisplayLayoutMonitor *_displayLayoutMonitor; // ivar: __displayLayoutMonitor
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) BOOL hasInitialVisibility; // ivar: _hasInitialVisibility
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible
@property (nonatomic) CGRect visibleFrame; // ivar: _visibleFrame


-(id)initWithHandler:(id)arg0 ;
-(void)_notifyHandlerOfVisibility;
-(void)_startObservingNotes;
-(void)_updateNotesVisibilityFromLayout:(id)arg0 ;
-(void)dealloc;
-(void)startObservingNotes;


@end


#endif