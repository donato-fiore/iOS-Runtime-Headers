// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRPARAMETERS_H
#define NRPARAMETERS_H

@protocol OS_nw_parameters;

#import <Foundation/Foundation.h>


@interface NRParameters : NSObject {
    NSObject<OS_nw_parameters> *_parameters;
}


@property (nonatomic) unsigned char serviceClass; // ivar: _serviceClass


-(id)copyParameters;
-(id)description;
-(id)init;
-(id)initWithParameters:(id)arg0 ;


@end


#endif