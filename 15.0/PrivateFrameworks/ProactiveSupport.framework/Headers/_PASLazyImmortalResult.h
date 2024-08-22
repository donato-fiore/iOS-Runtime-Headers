// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASLAZYIMMORTALRESULT_H
#define _PASLAZYIMMORTALRESULT_H

@class PASLazyResult;



@interface _PASLazyImmortalResult : PASLazyResult {
    uint8_t _done;
}




-(id)_initWithBlock:(id)arg0 ;
-(id)initWithResult:(id)arg0 ;
-(id)result;
-(id)resultIfAvailable;


@end


#endif