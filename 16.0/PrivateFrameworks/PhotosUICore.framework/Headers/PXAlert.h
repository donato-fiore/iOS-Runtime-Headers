// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXALERT_H
#define PXALERT_H

@class UIAlertController;

#import <Foundation/Foundation.h>

#import "PXAlertConfiguration.h"

@interface PXAlert : NSObject {
    BOOL _didLoad;
}


@property (readonly, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, nonatomic) PXAlertConfiguration *configuration; // ivar: _configuration


+(id)show:(id)arg0 ;
+(id)showForError:(id)arg0 ;
+(id)showWithConfiguration:(id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_loadIfNeeded;
-(void)_present;
-(void)dismissWithCompletionHandler:(id)arg0 ;


@end


#endif