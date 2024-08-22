// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFIMAPMESSAGEDOWNLOAD_H
#define MFIMAPMESSAGEDOWNLOAD_H

@class MFMessage, MFMimePart;
@protocol MFDataConsumer, MFCollectingDataConsumer;


#import "MFIMAPCompoundDownload.h"

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload {
    MFMessage *_message;
    MFMimePart *_topLevelPart;
    BOOL _allowsPartialDownloads;
    BOOL _usingPartialDownloads;
    BOOL _startedFetch;
    BOOL _fetchingMessageContents;
    BOOL _fetchingBodyText;
    BOOL _doneAddingSubdownloads;
    BOOL _fetchBodyData;
    id<MFDataConsumer> *_headerFilter;
    id<MFCollectingDataConsumer> *_headerConsumer;
    id<MFDataConsumer> *_textFilter;
    id<MFCollectingDataConsumer> *_textConsumer;
}




-(BOOL)allowsPartialDownloads;
-(BOOL)fetchBodyData;
-(BOOL)isComplete;
-(BOOL)partial;
-(id)data;
-(id)initWithMessage:(id)arg0 ;
-(id)message;
-(id)topLevelPart;
-(void)addCommandsToPipeline:(id)arg0 withCache:(id)arg1 ;
-(void)dealloc;
-(void)handleFetchResult:(id)arg0 ;
-(void)processResults;
-(void)setAllowsPartialDownloads:(BOOL)arg0 ;
-(void)setFetchBodyData:(BOOL)arg0 ;
-(void)setTopLevelPart:(id)arg0 ;


@end


#endif