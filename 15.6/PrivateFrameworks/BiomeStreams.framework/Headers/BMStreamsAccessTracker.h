// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMSTREAMSACCESSTRACKER_H
#define BMSTREAMSACCESSTRACKER_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface BMStreamsAccessTracker : NSObject {
    _PASLock *_lock;
}




+(id)sharedInstance;
-(BOOL)_checkAccess:(id)arg0 ;
-(BOOL)_sandboxCheck:(char *)arg0 path:(char *)arg1 ;
-(BOOL)checkAccess:(id)arg0 ;
-(id)init;
-(void)_logMissingEntitlementsForAccess:(id)arg0 ;
-(void)logMissingEntitlementsForAccess:(id)arg0 ;


@end


#endif