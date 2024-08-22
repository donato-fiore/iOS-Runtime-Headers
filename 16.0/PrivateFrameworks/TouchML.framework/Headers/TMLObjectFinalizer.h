// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLOBJECTFINALIZER_H
#define TMLOBJECTFINALIZER_H


#import <Foundation/Foundation.h>


@interface TMLObjectFinalizer : NSObject {
    id *_block;
}




// +(void)runBlock:(id)arg0 onFinalize:(unk)arg1  ;
-(id)initWithBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif