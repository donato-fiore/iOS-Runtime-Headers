// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDREMOVEANONYMOUSSHAREFROMSHAREDDBOPERATIONINFO_H
#define CKDREMOVEANONYMOUSSHAREFROMSHAREDDBOPERATIONINFO_H

@class CKDatabaseOperationInfo, NSDictionary;



@interface CKDRemoveAnonymousShareFromSharedDBOperationInfo : CKDatabaseOperationInfo

@property (copy, nonatomic) id *anonymousShareRemovedBlock; // ivar: _anonymousShareRemovedBlock
@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove; // ivar: _encryptedAnonymousSharesToRemove




@end


#endif