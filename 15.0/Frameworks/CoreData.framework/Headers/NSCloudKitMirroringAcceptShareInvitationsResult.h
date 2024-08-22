// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCLOUDKITMIRRORINGACCEPTSHAREINVITATIONSRESULT_H
#define NSCLOUDKITMIRRORINGACCEPTSHAREINVITATIONSRESULT_H

@class NSArray;


#import "NSCloudKitMirroringResult.h"

@interface NSCloudKitMirroringAcceptShareInvitationsResult : NSCloudKitMirroringResult

@property (retain, nonatomic) NSArray *acceptedShareMetadatas; // ivar: _acceptedShareMetadatas
@property (retain, nonatomic) NSArray *acceptedShares; // ivar: _acceptedShares


-(id)initWithRequest:(id)arg0 acceptedShares:(id)arg1 acceptedShareMetadatas:(id)arg2 error:(id)arg3 ;
-(void)dealloc;


@end


#endif