// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFMULTIUSERSTATESNAPSHOTMUTATION_H
#define _AFMULTIUSERSTATESNAPSHOTMUTATION_H

@class NSNumber, NSArray, NSString;
@protocol AFMultiUserStateSnapshotMutating;

#import <Foundation/Foundation.h>

#import "AFMultiUserStateSnapshot.h"

@interface _AFMultiUserStateSnapshotMutation : NSObject <AFMultiUserStateSnapshotMutating>

 {
    AFMultiUserStateSnapshot *_baseModel;
    NSNumber *_vtSatScore;
    NSArray *_confidenceScores;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setConfidenceScores:(id)arg0 ;
-(void)setVtSatScore:(id)arg0 ;


@end


#endif