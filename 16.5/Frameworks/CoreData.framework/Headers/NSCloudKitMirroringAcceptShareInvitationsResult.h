// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCLOUDKITMIRRORINGACCEPTSHAREINVITATIONSRESULT_H
#define NSCLOUDKITMIRRORINGACCEPTSHAREINVITATIONSRESULT_H

@class NSArray;


#import "NSCloudKitMirroringResult.h"

@interface NSCloudKitMirroringAcceptShareInvitationsResult : NSCloudKitMirroringResult

@property (retain, nonatomic) NSArray *acceptedShareMetadatas; // ivar: _acceptedShareMetadatas
@property (retain, nonatomic) NSArray *acceptedShares; // ivar: _acceptedShares


-(id)initWithRequest:(id)arg0 storeIdentifier:(id)arg1 acceptedShares:(id)arg2 acceptedShareMetadatas:(id)arg3 error:(id)arg4 ;
-(void)dealloc;


@end


#endif