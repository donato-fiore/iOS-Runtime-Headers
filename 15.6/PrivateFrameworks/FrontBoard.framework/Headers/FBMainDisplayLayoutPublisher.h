// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBMAINDISPLAYLAYOUTPUBLISHER_H
#define FBMAINDISPLAYLAYOUTPUBLISHER_H

@class FBSDisplayLayoutPublisher, FBSDisplayLayout, NSString;
@protocol FBSDisplayObserving, FBSDisplayLayoutPublisherObserving;

#import <Foundation/Foundation.h>


@interface FBMainDisplayLayoutPublisher : NSObject <FBSDisplayObserving, FBSDisplayLayoutPublisherObserving>

 {
    FBSDisplayLayoutPublisher *_publisher;
    int _displayBacklightToken;
}


@property (nonatomic) NSInteger backlightLevel;
@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interfaceOrientation;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;


+(id)sharedInstance;
-(id)_addElement:(id)arg0 forKey:(id)arg1 ;
-(id)_initWithPublisher:(id)arg0 ;
-(id)addElement:(id)arg0 ;
-(id)init;
-(id)transitionAssertionWithReason:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)displayMonitor:(id)arg0 didUpdateIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)flush;
-(void)publisher:(id)arg0 didUpdateLayout:(id)arg1 withTransition:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif