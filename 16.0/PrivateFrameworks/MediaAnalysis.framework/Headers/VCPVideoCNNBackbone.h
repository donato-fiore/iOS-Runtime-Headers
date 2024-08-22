// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
@property (readonly) *float outputBeforeSpatiialPooling; // ivar: _outputBeforeSpatiialPooling
@property (readonly) *float outputBeforeTemporalPooling; // ivar: _outputBeforeTemporalPooling
@property (readonly) *float outputRes4; // ivar: _outputRes4


+(id)sharedModel:(id)arg0 outputNames:(id)arg1 properties:(id)arg2 ;
-(id)initWithConfig:(id)arg0 ;
-(int)inference:(*float)arg0 ;


@end


#endif