// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFLTASKSTATEDOWNLOADINGMODEL_H
#define PFLTASKSTATEDOWNLOADINGMODEL_H

@class NSURLSessionDownloadTask, NSData;
@protocol PFLTaskState;

#import <Foundation/Foundation.h>


@interface PFLTaskStateDownloadingModel : NSObject <PFLTaskState>



@property (retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // ivar: _downloadTask
@property (retain, nonatomic) NSData *resumeData; // ivar: _resumeData


+(BOOL)supportsSecureCoding;
-(NSUInteger)tag;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resume:(id)arg0 completion:(id)arg1 ;
-(void)suspend;


@end


#endif