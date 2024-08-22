// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYAUTOEDITDURATIONCONSTRAINTSOLVER_H
#define PXSTORYAUTOEDITDURATIONCONSTRAINTSOLVER_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PXStoryAutoEditDurationConstraintSolver : NSObject {
    NSObject<OS_os_log> *_log;
    vector<PFStoryDurationInfo, std::allocator<PFStoryDurationInfo>> _infos;
    vector<PFStoryDurationInfo, std::allocator<PFStoryDurationInfo>> _solveResults;
}


@property (readonly, nonatomic) ? constrainedOverallDurationInfo;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) ? originalOverallDurationInfo;


-(BOOL)solveForMaximumDuration:(struct ? )arg0 ;
-(BOOL)solveForPreferredDuration:(struct ? )arg0 ;
-(id)diagnosticSwiftCodeForDurationUnitTestNamed:(id)arg0 maximumDuration:(struct ? )arg1 ;
-(id)diagnosticSwiftCodeForDurationUnitTestNamed:(id)arg0 preferredDuration:(struct ? )arg1 ;
-(id)init;
-(struct ? )constrainedDurationInfoAtIndex:(NSUInteger)arg0 ;
-(struct ? )originalDurationInfoAtIndex:(NSUInteger)arg0 ;
-(void)addClipWithDurationInfo:(struct ? )arg0 ;


@end


#endif