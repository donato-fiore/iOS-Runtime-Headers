// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWJASPERCOLORSTILLSEXECUTORREQUEST_H
#define BWJASPERCOLORSTILLSEXECUTORREQUEST_H

@protocol BWJasperColorStillsExecutorControllerDelegate;

#import <Foundation/Foundation.h>

#import "BWJasperColorStillsExecutorInput.h"

@interface BWJasperColorStillsExecutorRequest : NSObject

@property (readonly, nonatomic) NSObject<BWJasperColorStillsExecutorControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int err; // ivar: _err
@property (readonly, nonatomic) BWJasperColorStillsExecutorInput *input; // ivar: _input


-(id)description;
-(void)dealloc;


@end


#endif