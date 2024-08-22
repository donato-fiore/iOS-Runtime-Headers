// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSKEYBAG_H
#define AMSKEYBAG_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSFairPlayContext.h"

@interface AMSKeybag : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) AMSFairPlayContext *fairPlayContext; // ivar: _fairPlayContext


+(id)sharedInstance;
-(BOOL)importDiversityBagWithData:(id)arg0 error:(*id)arg1 ;
-(BOOL)importKeybagData:(id)arg0 outError:(*id)arg1 ;
-(BOOL)importKeybagWithData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)keybagSyncData:(id)arg0 transactionType:(unsigned int)arg1 outError:(*id)arg2 ;
-(id)keybagSyncDataWithAccountID:(id)arg0 transactionType:(unsigned int)arg1 error:(*id)arg2 ;
-(id)kybsyncData:(id)arg0 transationType:(unsigned int)arg1 error:(*id)arg2 ;
-(unsigned int)fairplayContextWithError:(*id)arg0 ;
-(void)resetContext;


@end


#endif