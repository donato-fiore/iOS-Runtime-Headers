// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFDADEFERREDMODIFYMAILBOXOPERATION_H
#define _MFDADEFERREDMODIFYMAILBOXOPERATION_H

@class MFOfflineCacheOperation, NSString;



@interface _MFDADeferredModifyMailboxOperation : MFOfflineCacheOperation {
    NSString *_folderID;
    NSString *_newParentFolderID;
    NSString *_newDisplayName;
}




+(BOOL)supportsSecureCoding;
-(BOOL)translateToLocalActionWithConnection:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFolderID:(id)arg0 newParentFolderID:(id)arg1 newDisplayName:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif