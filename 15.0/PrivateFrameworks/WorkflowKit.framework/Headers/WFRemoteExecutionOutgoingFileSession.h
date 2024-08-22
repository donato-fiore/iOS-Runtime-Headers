// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREMOTEEXECUTIONOUTGOINGFILESESSION_H
#define WFREMOTEEXECUTIONOUTGOINGFILESESSION_H

@class NSURL, NSString;


#import "WFRemoteExecutionSession.h"

@interface WFRemoteExecutionOutgoingFileSession : WFRemoteExecutionSession

@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (retain, nonatomic) NSString *transferIdentifier; // ivar: _transferIdentifier


+(BOOL)supportsVersion:(NSInteger)arg0 ;
+(NSInteger)version;
-(BOOL)sendToDestinations:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithService:(id)arg0 fileURL:(id)arg1 transferIdentifier:(id)arg2 requestIdentifier:(id)arg3 ;
-(void)fileSentWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)finishWithError:(id)arg0 ;


@end


#endif