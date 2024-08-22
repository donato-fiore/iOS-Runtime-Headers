// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINUIDIALOGPRESENTER_H
#define CHIPPLUGINUIDIALOGPRESENTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHIPPluginUIDialogPresenter : NSObject

@property (retain) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, nonatomic) id *context; // ivar: _context
@property (weak, nonatomic) id *dialogDelegate; // ivar: _dialogDelegate


-(id)initWithQueue:(id)arg0 context:(id)arg1 ;
-(void)requestUserPermissionForUnauthenticatedAccessory:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif