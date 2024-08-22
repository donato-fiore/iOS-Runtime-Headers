// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRUIDIALOGPRESENTER_H
#define HMMTRUIDIALOGPRESENTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMMTRUIDialogPresenter : NSObject

@property (retain) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, nonatomic) id *context; // ivar: _context
@property (weak, nonatomic) id *dialogDelegate; // ivar: _dialogDelegate


-(id)initWithQueue:(id)arg0 context:(id)arg1 ;
-(void)requestUserPermissionForUnauthenticatedAccessory:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif