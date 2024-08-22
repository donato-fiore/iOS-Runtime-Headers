// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASCACHEDRESULT_H
#define _PASCACHEDRESULT_H


#import <Foundation/Foundation.h>


@interface _PASCachedResult : NSObject {
    uint8_t _done;
    id *_data;
    _opaque_pthread_mutex_t _lock;
}




-(id)init;
-(id)resultNonnullWithBlock:(id)arg0 ;
-(id)resultWithBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif