// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STATUSBARSPINNERCONTROLLER_H
#define STATUSBARSPINNERCONTROLLER_H

@class NSString;
@protocol LoadProgressObserver, LoadableResource;

#import <Foundation/Foundation.h>


@interface StatusBarSpinnerController : NSObject <LoadProgressObserver>

 {
    int _currentlyLoadingResourcesCount;
    id<LoadableResource> *_resourceWhoseProgressIsShown;
    float _progress;
    BOOL _resourcesLoading;
    BOOL _showingProgressIndicator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_setProgress:(float)arg0 ;
-(void)_setResourcesLoading:(BOOL)arg0 ;
-(void)_updateProgressIndicator;
-(void)didFailLoadingResource:(id)arg0 ;
-(void)didStartLoadingResource;
-(void)didStopLoadingResource;
-(void)updateProgressWithResource:(id)arg0 ;


@end


#endif