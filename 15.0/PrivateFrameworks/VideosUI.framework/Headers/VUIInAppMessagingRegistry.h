// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIINAPPMESSAGINGREGISTRY_H
#define VUIINAPPMESSAGINGREGISTRY_H

@class NSPointerArray, NSNumber;

#import <Foundation/Foundation.h>


@interface VUIInAppMessagingRegistry : NSObject

@property (retain, nonatomic) NSPointerArray *buttonViews; // ivar: _buttonViews
@property (readonly, nonatomic) BOOL hasActiveButtons;
@property (readonly, nonatomic) NSNumber *hasFavoriteTeams; // ivar: _hasFavoriteTeams


+(id)sharedInstance;
-(id)init;
-(void)_notifyButtonsChanged;
-(void)_notifyButtonsChangedAction;
-(void)registerDownloadButton:(id)arg0 ;
-(void)registerHasFavorites:(BOOL)arg0 ;
-(void)unRegisterDownloadButton:(id)arg0 ;


@end


#endif