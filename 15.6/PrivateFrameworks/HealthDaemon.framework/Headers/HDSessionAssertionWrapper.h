// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSESSIONASSERTIONWRAPPER_H
#define HDSESSIONASSERTIONWRAPPER_H

@class HDAssertion;

#import <Foundation/Foundation.h>


@interface HDSessionAssertionWrapper : NSObject {
    HDAssertion *_currentAssertion;
}


@property (readonly, copy, nonatomic) id *createAndTakeBlock; // ivar: _createAndTakeBlock
@property (readonly, nonatomic) BOOL taken;


-(id)initWithCreateAndTakeBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif