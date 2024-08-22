// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPASSKITSTATEOBSERVER_H
#define CKPASSKITSTATEOBSERVER_H


#import <Foundation/Foundation.h>


@interface CKPassKitStateObserver : NSObject

@property (nonatomic) BOOL iTunesStoreDialogPresented; // ivar: _iTunesStoreDialogPresented
@property (nonatomic) BOOL passKitUIPresented; // ivar: _passKitUIPresented


+(id)sharedInstance;
-(id)description;
-(id)init;
-(void)_iTunesStoreDialogDidDismiss;
-(void)_iTunesStoreDialogWillDisplay;
-(void)_passKitUIDismissed;
-(void)dealloc;
-(void)prepareForResume;


@end


#endif