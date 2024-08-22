// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEFERREDPROCESSORREQUEST_H
#define BWDEFERREDPROCESSORREQUEST_H

@protocol BWDeferredProcessorControllerDelegate;

#import <Foundation/Foundation.h>

#import "FigWeakReference.h"
#import "BWDeferredProcessorControllerInput.h"

@interface BWDeferredProcessorRequest : NSObject {
    FigWeakReference *_delegateStorage;
}


@property (readonly, nonatomic) NSObject<BWDeferredProcessorControllerDelegate> *delegate;
@property (nonatomic) int err; // ivar: _err
@property (readonly, nonatomic) BWDeferredProcessorControllerInput *input; // ivar: _input


-(id)description;
-(id)initWithInput:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;


@end


#endif