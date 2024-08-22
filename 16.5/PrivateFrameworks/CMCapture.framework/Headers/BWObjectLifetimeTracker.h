// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWOBJECTLIFETIMETRACKER_H
#define BWOBJECTLIFETIMETRACKER_H


#import <Foundation/Foundation.h>


@interface BWObjectLifetimeTracker : NSObject {
    id *_deallocHandler;
}




+(id)trackerWithDeallocHandler:(id)arg0 ;
+(void)trackAttachmentBearer:(*void)arg0 deallocHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif