// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINFOTIMELINEDONATIONCLIENT_H
#define ATXINFOTIMELINEDONATIONCLIENT_H

@class _PASXPCClientHelper;

#import <Foundation/Foundation.h>


@interface ATXInfoTimelineDonationClient : NSObject {
    _PASXPCClientHelper *_xpcClientHelper;
}




+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)timelineDidReloadForWidget:(id)arg0 parentApp:(id)arg1 withEntries:(id)arg2 completion:(id)arg3 ;


@end


#endif