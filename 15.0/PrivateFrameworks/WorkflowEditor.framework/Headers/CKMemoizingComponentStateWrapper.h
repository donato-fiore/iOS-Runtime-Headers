// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMEMOIZINGCOMPONENTSTATEWRAPPER_H
#define CKMEMOIZINGCOMPONENTSTATEWRAPPER_H


#import <Foundation/Foundation.h>


@interface CKMemoizingComponentStateWrapper : NSObject {
    id *_memoizationState;
    mutex _mutex;
}




-(void)executeBlockWithMemoizationState:(id)arg0 ;


@end


#endif