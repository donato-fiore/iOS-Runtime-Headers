// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASLAZYRESULT_H
#define _PASLAZYRESULT_H


#import <Foundation/Foundation.h>


@interface _PASLazyResult : NSObject {
    id *_data;
    _opaque_pthread_mutex_t _lock;
    id *_block;
}


@property (readonly, nonatomic) id *result;
@property (readonly, nonatomic) id *resultIfAvailable;


-(id)_init;
-(id)_initWithBlock:(id)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithResult:(id)arg0 ;
-(void)dealloc;


@end


#endif