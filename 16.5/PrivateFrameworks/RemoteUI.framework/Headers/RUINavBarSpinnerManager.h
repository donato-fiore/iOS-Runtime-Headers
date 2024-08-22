// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RUINAVBARSPINNERMANAGER_H
#define RUINAVBARSPINNERMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface RUINavBarSpinnerManager : NSObject {
    NSMutableDictionary *_savedRecords;
}


@property (nonatomic) NSInteger activityIndicatorViewStyle; // ivar: _activityIndicatorViewStyle


+(id)sharedSpinnerManager;
-(id)init;
-(void)startAnimatingInNavItem:(id)arg0 title:(id)arg1 forIdentifier:(id)arg2 hideBackButton:(BOOL)arg3 hideLeftItems:(BOOL)arg4 ;
-(void)stopAnimatingForIdentifier:(id)arg0 ;


@end


#endif