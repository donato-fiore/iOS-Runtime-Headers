// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFIMAPMESSAGEDOWNLOAD_H
#define MFIMAPMESSAGEDOWNLOAD_H

@class MFMessage, MFMimePart;
@protocol MFCollectingDataConsumer;


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
    id<MFCollectingDataConsumer> *_headerConsumer;
    id<MFCollectingDataConsumer> *_textConsumer;
    BOOL _receivedHeaders;
    BOOL _receivedText;
}




-(BOOL)allowsPartialDownloads;
-(BOOL)fetchBodyData;
-(BOOL)isComplete;
-(BOOL)isSuccessful;
-(BOOL)partial;
-(id)_networkConverterWithConsumer:(id)arg0 didReceiveData:(id)arg1 ;
-(id)data;
-(id)initWithMessage:(id)arg0 ;
-(id)message;
-(id)topLevelPart;
-(void)addCommandsToPipeline:(id)arg0 withCache:(id)arg1 ;
-(void)handleFetchResult:(id)arg0 ;
-(void)processResults;
-(void)setAllowsPartialDownloads:(BOOL)arg0 ;
-(void)setFetchBodyData:(BOOL)arg0 ;
-(void)setTopLevelPart:(id)arg0 ;


@end


#endif