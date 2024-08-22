// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGLAZYINIT_H
#define SGLAZYINIT_H


#import <Foundation/Foundation.h>


@interface SGLazyInit : NSObject {
    id *_initializer;
    id *_destructor;
    id *_cachedObject;
}




-(id)getObject;
// -(id)initWithInitializer:(id)arg0 destructor:(unk)arg1  ;
-(id)peekAtCachedObject;
-(void)dealloc;
-(void)destroyCachedObject;


@end


#endif