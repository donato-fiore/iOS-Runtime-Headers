// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BRCUPLOADINFO_H
#define _BRCUPLOADINFO_H

@class BRCTransferInfo, NSMutableSet;



@interface _BRCUploadInfo : BRCTransferInfo

@property (readonly, nonatomic) BOOL allUploadsPendingQuota;
@property (readonly, nonatomic) NSMutableSet *outOfQuotaDocIDs; // ivar: _outOfQuotaDocIDs


-(id)description;
-(id)init;
-(void)copyProgressInfoToProgress:(id)arg0 options:(char)arg1 ;
-(void)updateLocalizedDescriptionWithOptions:(char)arg0 ;


@end


#endif