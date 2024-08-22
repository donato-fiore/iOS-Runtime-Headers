// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPERSISTEDTASKATTRIBUTION_H
#define TRIPERSISTEDTASKATTRIBUTION_H

@class TRIPBMessage, NSString, TRIPersistedNetworkBehavior;



@interface TRIPersistedTaskAttribution : TRIPBMessage

@property (copy, nonatomic) NSString *applicationBundleId;
@property (nonatomic) int cloudKitContainer;
@property (nonatomic) BOOL hasApplicationBundleId;
@property (nonatomic) BOOL hasCloudKitContainer;
@property (nonatomic) BOOL hasNetworkBehavior;
@property (nonatomic) BOOL hasTeamId;
@property (retain, nonatomic) TRIPersistedNetworkBehavior *networkBehavior;
@property (copy, nonatomic) NSString *teamId;


+(id)descriptor;


@end


#endif