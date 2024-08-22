// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWJASPERDISPARITYPROCESSORREQUEST_H
#define BWJASPERDISPARITYPROCESSORREQUEST_H

@protocol BWJasperDisparityProcessorControllerDelegate;

#import <Foundation/Foundation.h>

#import "BWJasperDisparityProcessorInput.h"

@interface BWJasperDisparityProcessorRequest : NSObject

@property (readonly, nonatomic) NSObject<BWJasperDisparityProcessorControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int err; // ivar: _err
@property (readonly, nonatomic) BWJasperDisparityProcessorInput *input; // ivar: _input


-(id)description;
-(id)initWithInput:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;


@end


#endif