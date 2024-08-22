// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFDADEFERREDNEWMAILBOXOPERATION_H
#define _MFDADEFERREDNEWMAILBOXOPERATION_H

@class MFOfflineCacheOperation, NSString;



@interface _MFDADeferredNewMailboxOperation : MFOfflineCacheOperation {
    NSString *_displayName;
    NSString *_parentFolderID;
    NSString *_temporaryFolderID;
}




+(BOOL)supportsSecureCoding;
-(BOOL)translateToLocalActionWithConnection:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif