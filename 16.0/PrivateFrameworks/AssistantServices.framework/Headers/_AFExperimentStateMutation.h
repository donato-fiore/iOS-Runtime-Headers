// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFEXPERIMENTSTATEMUTATION_H
#define _AFEXPERIMENTSTATEMUTATION_H

@class NSDate, NSString;
@protocol AFExperimentStateMutating;

#import <Foundation/Foundation.h>

#import "AFExperimentState.h"

@interface _AFExperimentStateMutation : NSObject <AFExperimentStateMutating>

 {
    AFExperimentState *_base;
    NSDate *_lastSyncDate;
    BOOL _didEnd;
    NSString *_endingGroupIdentifier;
    NSString *_version;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getDidEnd;
-(BOOL)isDirty;
-(id)getEndingGroupIdentifier;
-(id)getLastSyncDate;
-(id)getVersion;
-(id)initWithBase:(id)arg0 ;
-(void)setDidEnd:(BOOL)arg0 ;
-(void)setEndingGroupIdentifier:(id)arg0 ;
-(void)setLastSyncDate:(id)arg0 ;
-(void)setVersion:(id)arg0 ;


@end


#endif