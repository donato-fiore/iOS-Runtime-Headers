// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDATTACHMENTANALYTICS_H
#define HDATTACHMENTANALYTICS_H


#import <Foundation/Foundation.h>


@interface HDAttachmentAnalytics : NSObject

@property (nonatomic) NSInteger numberOfAttachments; // ivar: _numberOfAttachments
@property (nonatomic) NSInteger numberOfAttachmentsCreatedLast24Hours; // ivar: _numberOfAttachmentsCreatedLast24Hours
@property (nonatomic) NSInteger numberOfAttachmentsWithMultipleReferences; // ivar: _numberOfAttachmentsWithMultipleReferences
@property (nonatomic) NSInteger numberOfOrphanedAttachments; // ivar: _numberOfOrphanedAttachments
@property (nonatomic) NSInteger numberOfOrphanedReferences; // ivar: _numberOfOrphanedReferences
@property (nonatomic) NSInteger numberOfReferences; // ivar: _numberOfReferences
@property (nonatomic) NSInteger numberOfReferencesCreatedLast24Hours; // ivar: _numberOfReferencesCreatedLast24Hours
@property (nonatomic) NSInteger numberOfTombstones; // ivar: _numberOfTombstones
@property (nonatomic) NSInteger numberOfTombstonesCreatedLast24Hours; // ivar: _numberOfTombstonesCreatedLast24Hours
@property (nonatomic) NSInteger numberOfUnconfirmedFiles; // ivar: _numberOfUnconfirmedFiles
@property (nonatomic) NSInteger totalSizeOfFiles; // ivar: _totalSizeOfFiles




@end


#endif