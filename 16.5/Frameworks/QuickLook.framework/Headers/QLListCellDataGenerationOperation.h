// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLLISTCELLDATAGENERATIONOPERATION_H
#define QLLISTCELLDATAGENERATIONOPERATION_H

@class QLAsynchronousOperation, QLItem;
@protocol QLListCellDataGenerationOperationDelegate;


#import "QLListCell.h"

@interface QLListCellDataGenerationOperation : QLAsynchronousOperation {
    BOOL _didGenerateThumbnail;
    BOOL _didGenerateSubtitleInformation;
}


@property (weak, nonatomic) QLListCell *cell; // ivar: _cell
@property (weak, nonatomic) NSObject<QLListCellDataGenerationOperationDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger index; // ivar: _index
@property (weak, nonatomic) QLItem *item; // ivar: _item


-(id)initWithListCell:(id)arg0 index:(NSUInteger)arg1 item:(id)arg2 delegate:(id)arg3 ;
-(void)_didDetermineFileSize:(id)arg0 fileTypeString:(id)arg1 ;
-(void)_didGenerateThumbnail:(id)arg0 ;
-(void)_finishIfNeeded;
-(void)main;


@end


#endif