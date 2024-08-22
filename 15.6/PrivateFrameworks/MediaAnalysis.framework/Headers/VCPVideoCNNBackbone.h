// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOCNNBACKBONE_H
#define VCPVIDEOCNNBACKBONE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "VCPCNNModelEspresso.h"

@interface VCPVideoCNNBackbone : NSObject {
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_outputNames;
}


@property (readonly) *float outputBeforeFc; // ivar: _outputBeforeFc
@property (readonly) *float outputBeforePooling; // ivar: _outputBeforePooling
@property (readonly) *float outputLastLayer400; // ivar: _outputLastLayer400


+(id)sharedModel:(id)arg0 outputNames:(id)arg1 properties:(id)arg2 ;
-(id)initWithConfig:(id)arg0 ;
-(int)inference:(*float)arg0 ;


@end


#endif