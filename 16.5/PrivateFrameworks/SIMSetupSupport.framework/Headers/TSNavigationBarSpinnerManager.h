// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSNAVIGATIONBARSPINNERMANAGER_H
#define TSNAVIGATIONBARSPINNERMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSNavigationBarSpinnerManager : NSObject

@property (retain) NSMutableDictionary *navigationItems; // ivar: _navigationItems
@property (retain) NSMutableDictionary *previousLeftBarButtonItems; // ivar: _previousLeftBarButtonItems
@property (retain) NSMutableDictionary *previousRightBarButtonItems; // ivar: _previousRightBarButtonItems


+(id)sharedManager;
-(id)init;
-(void)startSpinnerInNavigationItem:(id)arg0 withIdentifier:(id)arg1 ;
-(void)stopSpinnerForIdentifier:(id)arg0 ;
-(void)stopSpinnerInNavigationItem:(id)arg0 withIdentifier:(id)arg1 ;


@end


#endif