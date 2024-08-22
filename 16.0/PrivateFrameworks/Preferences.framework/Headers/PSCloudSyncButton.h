// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSCLOUDSYNCBUTTON_H
#define PSCLOUDSYNCBUTTON_H

@class UIBarButtonItem, NSDictionary, NSError, NSString;
@protocol PSCloudSyncPopoverDelegate, PSCloudSyncDelegate;


#import "PSViewController.h"

@interface PSCloudSyncButton : UIBarButtonItem <PSCloudSyncPopoverDelegate>



@property (nonatomic, getter=isCloudSyncEnabled) BOOL cloudSyncEnabled;
@property (readonly, weak, nonatomic) PSViewController *controller; // ivar: _controller
@property (weak, nonatomic) NSObject<PSCloudSyncDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDictionary *options; // ivar: _options
@property (nonatomic) BOOL syncEnabled; // ivar: _syncEnabled
@property (retain, nonatomic) NSError *syncError; // ivar: _syncError
@property (readonly, nonatomic) NSString *syncMessage;
@property (readonly, copy, nonatomic) NSString *syncTitle;


-(BOOL)hasMergeConflict;
-(BOOL)showRedirectSheet;
-(id)initWithController:(id)arg0 options:(id)arg1 delegate:(id)arg2 ;
-(id)mergeConflictMessage;
-(void)cloudSyncAction:(id)arg0 ;
-(void)update;
-(void)updateIcon;


@end


#endif