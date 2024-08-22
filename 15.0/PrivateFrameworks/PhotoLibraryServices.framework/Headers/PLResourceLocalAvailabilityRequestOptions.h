// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLRESOURCELOCALAVAILABILITYREQUESTOPTIONS_H
#define PLRESOURCELOCALAVAILABILITYREQUESTOPTIONS_H

@class NSString, CPLResourceTransferTaskOptions;

#import <Foundation/Foundation.h>


@interface PLResourceLocalAvailabilityRequestOptions : NSObject

@property (copy, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (copy, nonatomic) id *dataHandler; // ivar: _dataHandler
@property (copy, nonatomic) CPLResourceTransferTaskOptions *downloadOptions; // ivar: _downloadOptions
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (readonly, nonatomic) BOOL shouldPrioritize;
@property (copy, nonatomic) NSString *taskIdentifier; // ivar: _taskIdentifier
@property (nonatomic, getter=isTransient) BOOL transient; // ivar: _transient
@property (nonatomic) BOOL wantsProgress; // ivar: _wantsProgress


-(id)init;


@end


#endif