// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDMESSAGEACTIVEDEVICE_H
#define IMDMESSAGEACTIVEDEVICE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface IMDMessageActiveDevice : NSObject

@property (nonatomic) BOOL hasReceivedReadReceipt; // ivar: _hasReceivedReadReceipt
@property (retain, nonatomic) NSString *idsDestination; // ivar: _idsDestination
@property (retain, nonatomic) NSDate *latestActiveDate; // ivar: _latestActiveDate
@property (retain, nonatomic) NSDate *latestReadReceipt; // ivar: _latestReadReceipt


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldDisplayAttachmentDownloadFailure;
-(BOOL)shouldDisplayRemoteDecryptionFailure;
-(BOOL)shouldSendTypingIndicator;
-(id)description;
-(id)initWithIDSDestination:(id)arg0 latestDate:(id)arg1 latestReadReceiptDate:(id)arg2 hasReceivedReadReceipt:(BOOL)arg3 ;


@end


#endif