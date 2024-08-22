// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCOREMLREQUEST_H
#define VCPCOREMLREQUEST_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface VCPCoreMLRequest : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


-(id)initWithModelName:(id)arg0 ;


@end


#endif