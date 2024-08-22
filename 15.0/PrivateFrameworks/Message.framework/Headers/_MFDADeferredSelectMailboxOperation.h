// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFDADEFERREDSELECTMAILBOXOPERATION_H
#define _MFDADEFERREDSELECTMAILBOXOPERATION_H

@class MFOfflineCacheOperation, NSString;



@interface _MFDADeferredSelectMailboxOperation : MFOfflineCacheOperation {
    NSString *_folderID;
}




+(BOOL)supportsSecureCoding;
-(BOOL)translateToLocalActionWithConnection:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif