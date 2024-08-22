// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLPROPERTYCHANGEDBLOCKSIGNALHANDLER_H
#define TMLPROPERTYCHANGEDBLOCKSIGNALHANDLER_H

@class NSString;
@protocol TMLBinder;


#import "TMLBlockSignalHandler.h"
#import "TMLBinding.h"

@interface TMLPropertyChangedBlockSignalHandler : TMLBlockSignalHandler <TMLBinder>

 {
    TMLBinding *_binding;
}


@property (readonly, nonatomic) NSInteger bindingOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(id)initWithBlock:(id)arg0 binding:(unk)arg1  ;
-(void)attach;
-(void)bindingValueChanged:(id)arg0 ;
-(void)detach;


@end


#endif