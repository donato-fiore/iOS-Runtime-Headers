// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLE5INPUTPORTBINDER_H
#define MLE5INPUTPORTBINDER_H

@class NSString;
@protocol MLE5PortBinder;

#import <Foundation/Foundation.h>

#import "MLFeatureValue.h"

@interface MLE5InputPortBinder : NSObject <MLE5PortBinder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) MLFeatureValue *featureValue; // ivar: _featureValue
@property (readonly) NSUInteger hash;
@property (readonly) *e5rt_io_port portHandle; // ivar: _portHandle
@property (readonly) Class superclass;


-(BOOL)bindFeatureValue:(id)arg0 error:(*id)arg1 ;
-(id)initWithPort:(struct e5rt_io_port *)arg0 ;


@end


#endif