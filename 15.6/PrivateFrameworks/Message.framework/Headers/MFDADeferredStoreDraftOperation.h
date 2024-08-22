// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFDADEFERREDSTOREDRAFTOPERATION_H
#define MFDADEFERREDSTOREDRAFTOPERATION_H

@class MFOfflineCacheOperation, NSString;



@interface MFDADeferredStoreDraftOperation : MFOfflineCacheOperation {
    NSString *_messageIDHeader;
    NSString *_folderID;
}




+(BOOL)supportsSecureCoding;
+(id)log;
-(BOOL)translateToLocalActionWithConnection:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageIDHeader:(id)arg0 mailbox:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif