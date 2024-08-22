// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSASSETPROCESSEDSIGNALS_V3_H
#define CLSASSETPROCESSEDSIGNALS_V3_H

@class v1;
@protocol CLSNSFWProcessedSignals;



@interface CLSAssetProcessedSignals_v3 : v1 <CLSNSFWProcessedSignals>



@property (nonatomic) BOOL isNSFWExplicit; // ivar: _isNSFWExplicit
@property (nonatomic) BOOL isPreciselyNSFWExplicit; // ivar: _isPreciselyNSFWExplicit
@property (nonatomic) BOOL isRecallinglyNSFWExplicit; // ivar: _isRecallinglyNSFWExplicit




@end


#endif