// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFSHAREDCONFIDENCESCOREMUTATION_H
#define _AFSHAREDCONFIDENCESCOREMUTATION_H

@class NSString;
@protocol AFSharedConfidenceScoreMutating;

#import <Foundation/Foundation.h>

#import "AFSharedConfidenceScore.h"

@interface _AFSharedConfidenceScoreMutation : NSObject <AFSharedConfidenceScoreMutating>

 {
    AFSharedConfidenceScore *_base;
    NSString *_sharedUserId;
    NSUInteger _confidenceScore;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSUInteger)getConfidenceScore;
-(id)getSharedUserId;
-(id)initWithBase:(id)arg0 ;
-(void)setConfidenceScore:(NSUInteger)arg0 ;
-(void)setSharedUserId:(id)arg0 ;


@end


#endif