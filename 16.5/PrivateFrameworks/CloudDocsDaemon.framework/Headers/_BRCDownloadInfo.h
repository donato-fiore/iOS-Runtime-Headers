// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BRCDOWNLOADINFO_H
#define _BRCDOWNLOADINFO_H

@class BRCTransferInfo, NSMutableDictionary;



@interface _BRCDownloadInfo : BRCTransferInfo

@property (nonatomic) NSInteger previousCompletedUnitCount; // ivar: previousCompletedUnitCount
@property (nonatomic) NSInteger previousTotalUnitCount; // ivar: previousTotalUnitCount
@property (readonly, nonatomic) NSMutableDictionary *resumeUnitCounts; // ivar: _resumeUnitCounts


-(id)init;
-(void)copyProgressInfoToProgress:(id)arg0 options:(char)arg1 ;
-(void)updateLocalizedDescriptionWithOptions:(char)arg0 ;


@end


#endif