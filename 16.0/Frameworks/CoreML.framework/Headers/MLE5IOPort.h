// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLE5IOPORT_H
#define MLE5IOPORT_H

@class NSString;
@protocol MLE5PortBinder;

#import <Foundation/Foundation.h>

#import "MLFeatureValue.h"
#import "MLFeatureDescription.h"

@interface MLE5IOPort : NSObject {
    MLFeatureValue *_inputFeatureValue;
}


@property (retain) NSObject<MLE5PortBinder> *binder; // ivar: _binder
@property (readonly) MLFeatureDescription *featureDescription; // ivar: _featureDescription
@property (retain) MLFeatureValue *featureValue;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) *e5rt_io_port portHandle; // ivar: _portHandle


-(BOOL)prepareAndReturnError:(*id)arg0 ;
-(id)description;
-(id)initWithPortHandle:(struct e5rt_io_port *)arg0 name:(id)arg1 featureDescription:(id)arg2 ;
-(void)dealloc;


@end


#endif