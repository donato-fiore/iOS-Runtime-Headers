// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLE5OUTPUTPORTBINDER_H
#define MLE5OUTPUTPORTBINDER_H

@class NSString;
@protocol MLE5PortBinder, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MLFeatureValue.h"
#import "MLFeatureDescription.h"

@interface MLE5OutputPortBinder : NSObject <MLE5PortBinder>

 {
    MLFeatureValue *_featureValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) MLFeatureDescription *featureDescription; // ivar: _featureDescription
@property (readonly) MLFeatureValue *featureValue;
@property (readonly) NSUInteger hash;
@property (retain) id *outputBacking; // ivar: _outputBacking
@property (readonly) *e5rt_io_port portHandle; // ivar: _portHandle
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(BOOL)bindAndReturnError:(*id)arg0 ;
-(id)_makeFeatureValueAndReturnError:(*id)arg0 ;
-(id)initWithPort:(struct e5rt_io_port *)arg0 featureDescription:(id)arg1 ;


@end


#endif