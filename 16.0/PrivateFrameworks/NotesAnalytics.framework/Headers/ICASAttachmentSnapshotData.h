// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASATTACHMENTSNAPSHOTDATA_H
#define ICASATTACHMENTSNAPSHOTDATA_H

@class NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASAttachmentSnapshotData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *attachmentSnapshotSummary; // ivar: _attachmentSnapshotSummary
@property (readonly, nonatomic) NSArray *docScanSnapshotSummary; // ivar: _docScanSnapshotSummary
@property (readonly, nonatomic) NSArray *drawingSnapshotSummary; // ivar: _drawingSnapshotSummary
@property (readonly, nonatomic) NSArray *tableSnapshotSummary; // ivar: _tableSnapshotSummary


+(id)dataName;
-(id)initWithAttachmentSnapshotSummary:(id)arg0 docScanSnapshotSummary:(id)arg1 drawingSnapshotSummary:(id)arg2 tableSnapshotSummary:(id)arg3 ;
-(id)toDict;


@end


#endif