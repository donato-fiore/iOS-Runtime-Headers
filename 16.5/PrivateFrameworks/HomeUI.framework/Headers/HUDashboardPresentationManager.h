// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDASHBOARDPRESENTATIONMANAGER_H
#define HUDASHBOARDPRESENTATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface HUDashboardPresentationManager : NSObject



+(id)sharedManager;
-(id)init;
-(void)navigationController:(id)arg0 didPushItem:(id)arg1 ;
-(void)navigationController:(id)arg0 didUpdatePreferredPaletteHeight:(CGFloat)arg1 ;
-(void)navigationController:(id)arg0 willPushItem:(id)arg1 ;


@end


#endif