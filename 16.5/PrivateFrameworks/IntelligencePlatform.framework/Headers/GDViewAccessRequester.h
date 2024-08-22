// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDVIEWACCESSREQUESTER_H
#define GDVIEWACCESSREQUESTER_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface GDViewAccessRequester : NSObject {
    _PASLock *_lock;
}




+(BOOL)currentProcessIsSandboxed;
-(id)_requestAssertionForViewName:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)requestAssertionForViewName:(id)arg0 error:(*id)arg1 ;


@end


#endif