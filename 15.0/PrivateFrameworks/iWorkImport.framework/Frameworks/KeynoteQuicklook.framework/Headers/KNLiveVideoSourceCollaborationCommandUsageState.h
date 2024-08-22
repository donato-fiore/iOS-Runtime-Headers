// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNLIVEVIDEOSOURCECOLLABORATIONCOMMANDUSAGESTATE_H
#define KNLIVEVIDEOSOURCECOLLABORATIONCOMMANDUSAGESTATE_H

@class TSKSosBase, NSUUID;
@protocol NSCopying;



@interface KNLiveVideoSourceCollaborationCommandUsageState : TSKSosBase <NSCopying>

 {
    NSUUID *_singleCollaborationCommandUsageToken;
    BOOL _definedSingleCollaborationCommandUsageToken;
}


@property (readonly, nonatomic) BOOL hasMultipleCollaborationCommandUsageTokens; // ivar: _hasMultipleCollaborationCommandUsageTokens


+(id)emptyUsageState;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithSingleCollaborationCommandUsageToken:(id)arg0 hasMultipleCollaborationCommandUsageTokens:(BOOL)arg1 ;
-(id)usageStateByAddingCollaborationCommandUsageToken:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif