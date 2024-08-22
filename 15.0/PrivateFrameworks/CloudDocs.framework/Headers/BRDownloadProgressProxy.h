// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRDOWNLOADPROGRESSPROXY_H
#define BRDOWNLOADPROGRESSPROXY_H

@class NSProgress, NSMetadataQuery, NSOperationQueue, NSString;



@interface BRDownloadProgressProxy : NSProgress {
    NSMetadataQuery *_query;
    NSOperationQueue *_queue;
    NSString *_personaID;
}




-(id)initWithURL:(id)arg0 ;
-(void)_queryDidReceiveUpdate:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif