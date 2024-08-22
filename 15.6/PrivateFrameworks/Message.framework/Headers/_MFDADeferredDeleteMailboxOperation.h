// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFDADEFERREDDELETEMAILBOXOPERATION_H
#define _MFDADEFERREDDELETEMAILBOXOPERATION_H

@class MFOfflineCacheOperation, NSString;



@interface _MFDADeferredDeleteMailboxOperation : MFOfflineCacheOperation {
    NSString *_folderID;
}




+(BOOL)supportsSecureCoding;
-(BOOL)translateToLocalActionWithConnection:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif