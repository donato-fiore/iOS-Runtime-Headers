// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFFEATUREMANAGER_H
#define SFFEATUREMANAGER_H

@class WBUFeatureManager;



@interface SFFeatureManager : WBUFeatureManager

@property (readonly, nonatomic) BOOL isSimplifiedBookmarkingEnabled; // ivar: _isSimplifiedBookmarkingEnabled
@property (readonly, nonatomic, getter=isLoweredBarEnabled) BOOL loweredBarEnabled; // ivar: _loweredBarEnabled
@property (readonly, nonatomic) NSInteger preferredCapsuleLayoutStyle;
@property (readonly, nonatomic, getter=isUnifiedBarEnabled) BOOL unifiedBarEnabled; // ivar: _unifiedBarEnabled
@property (readonly, nonatomic) BOOL usesEdgeToEdgeCapsule;


+(id)sharedFeatureManager;
-(id)init;


@end


#endif