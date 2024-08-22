// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMOTEEXECUTIONFILECODER_H
#define WFREMOTEEXECUTIONFILECODER_H

@class WFFileCoder, NSURL, NSString, NSMutableArray;


#import "WFRemoteExecutionCoordinator.h"

@interface WFRemoteExecutionFileCoder : WFFileCoder

@property (weak, nonatomic) WFRemoteExecutionCoordinator *coordinator; // ivar: _coordinator
@property (copy, nonatomic) id *fileAvailabilityHandler; // ivar: _fileAvailabilityHandler
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (retain, nonatomic) NSMutableArray *transferIdentifiers; // ivar: _transferIdentifiers


+(BOOL)supportsSecureCoding;
-(NSInteger)targetPlatform;
-(id)decodeFileWithCoder:(id)arg0 fileShouldBeDeletedOnDeallocation:(*BOOL)arg1 fileIsSecurityScoped:(*BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinator:(id)arg0 requestIdentifier:(id)arg1 ;
-(void)archiveFileAtURL:(id)arg0 fileShouldBeDeletedOnDeallocation:(BOOL)arg1 withCoder:(id)arg2 ;
-(void)cancelOutstandingTransfers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fileAvailabilityChanged;
-(void)waitForFileAvailabilityWithCompletionHandler:(id)arg0 ;


@end


#endif