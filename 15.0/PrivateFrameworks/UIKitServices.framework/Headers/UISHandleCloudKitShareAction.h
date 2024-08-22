// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISHANDLECLOUDKITSHAREACTION_H
#define UISHANDLECLOUDKITSHAREACTION_H

@class BSAction, CKShareMetadata;



@interface UISHandleCloudKitShareAction : BSAction {
    CKShareMetadata *_cachedMetadata;
}


@property (readonly, nonatomic) CKShareMetadata *shareMetadata;


+(id)cloudKitShareActionWithShareMetadata:(id)arg0 ;
+(void)loadCloudKitFramework;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(NSInteger)UIActionType;
-(id)data;
-(id)initWithShareMetadata:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif