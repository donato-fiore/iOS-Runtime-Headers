// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLDATAFETCHER_H
#define QLDATAFETCHER_H

@class NSData, NSString, NSURL;


#import "QLItemFetcher.h"
#import "QLItem.h"

@interface QLDataFetcher : QLItemFetcher {
    NSData *_data;
    NSString *_contentType;
    NSString *_previewItemTitle;
    NSURL *_temporaryURL;
    QLItem *_item;
}




+(BOOL)supportsSecureCoding;
-(id)_createTemporaryFileIfNeeded;
-(id)_temporaryFilename;
-(id)fetchedContent;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 contentType:(id)arg1 previewItemTitle:(id)arg2 ;
-(id)initWithItem:(id)arg0 contentType:(id)arg1 ;
-(id)itemSize;
-(id)newItemProvider;
-(id)shareableItem;
-(void)_deleteTempraryFileIfNeeded;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)fetchContentWithAllowedOutputClasses:(id)arg0 inQueue:(id)arg1 updateBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(void)loadDataIfNeeded;
-(void)prepareShareableItem:(id)arg0 ;


@end


#endif