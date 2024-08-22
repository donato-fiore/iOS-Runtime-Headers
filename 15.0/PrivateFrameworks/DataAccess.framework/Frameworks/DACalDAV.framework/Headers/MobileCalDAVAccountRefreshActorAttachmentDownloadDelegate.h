// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOBILECALDAVACCOUNTREFRESHACTORATTACHMENTDOWNLOADDELEGATE_H
#define MOBILECALDAVACCOUNTREFRESHACTORATTACHMENTDOWNLOADDELEGATE_H

@class NSString;
@protocol DAEventsAttachmentDownloadConsumer;

#import <Foundation/Foundation.h>


@interface MobileCalDAVAccountRefreshActorAttachmentDownloadDelegate : NSObject <DAEventsAttachmentDownloadConsumer>

 {
    id *_retainedSelf;
    NSString *_uuid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAttachmentUUID:(id)arg0 ;
-(void)beginDownload;
-(void)downloadFinishedError:(id)arg0 ;
-(void)downloadProgressDownloadedByteCount:(NSInteger)arg0 totalByteCount:(NSInteger)arg1 ;


@end


#endif