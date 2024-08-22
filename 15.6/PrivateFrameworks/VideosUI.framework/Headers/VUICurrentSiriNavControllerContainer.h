// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUICURRENTSIRINAVCONTROLLERCONTAINER_H
#define VUICURRENTSIRINAVCONTROLLERCONTAINER_H

@class NSPointerArray;

#import <Foundation/Foundation.h>


@interface VUICurrentSiriNavControllerContainer : NSObject

@property (retain, nonatomic) NSPointerArray *activeNavigationControllers; // ivar: _activeNavigationControllers


+(BOOL)isRunningInSiriPluggin;
+(id)sharedInstance;
-(id)currentSiriNavController;
-(id)init;
-(void)setCurrentSiriNavController:(id)arg0 ;


@end


#endif