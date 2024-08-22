// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYDIAGNOSTICSSESSION_H
#define HMDACCESSORYDIAGNOSTICSSESSION_H

@class HMFObject, NSString, NSNumber, NSFileHandle, NSDictionary;
@protocol HMFLogging, HMDAccessoryDataStreamAdapterDelegate, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDAccessoryDataStreamAdapter.h"
#import "HMDAccessoryDiagnosticsSettings.h"

@interface HMDAccessoryDiagnosticsSession : HMFObject <HMFLogging, HMDAccessoryDataStreamAdapterDelegate>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (nonatomic) NSUInteger bytesWritten; // ivar: _bytesWritten
@property (retain) HMDAccessoryDataStreamAdapter *dataStream; // ivar: _dataStream
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *expectedDataSequenceNumber; // ivar: _expectedDataSequenceNumber
@property (retain) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (copy) NSString *filePath; // ivar: _filePath
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxBytes; // ivar: _maxBytes
@property (copy) id *pendingCompletionHandler; // ivar: _pendingCompletionHandler
@property BOOL readyForDataTransfer; // ivar: _readyForDataTransfer
@property (readonly) NSString *reason; // ivar: _reason
@property (readonly) HMDAccessoryDiagnosticsSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (copy) NSDictionary *urlParameters; // ivar: _urlParameters
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_handleReceivedData:(id)arg0 ;
-(BOOL)_validDataSequenceNumber:(id)arg0 ;
-(BOOL)dataStreamAdapter:(id)arg0 didReceiveData:(id)arg1 ;
-(id)_createLogFile;
-(id)attributeDescriptions;
-(id)fileExtension;
-(id)initWithAccessory:(id)arg0 workQueue:(id)arg1 settings:(id)arg2 ;
-(id)logIdentifier;
-(void)_callCompletionHandlerWithError:(id)arg0 ;
-(void)_setUpWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)dataStreamAdapterDidCompleteDataRead:(id)arg0 ;
-(void)dataStreamAdapterDidFailDataRead:(id)arg0 ;
-(void)dealloc;
-(void)readDataWithCompletion:(id)arg0 ;
-(void)setUpWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)shutDown;


@end


#endif