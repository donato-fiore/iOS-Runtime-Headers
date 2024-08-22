// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSINCOMINGFILETRANSFER_H
#define NMSINCOMINGFILETRANSFER_H

@class NSString, NSURL, IDSMessageContext, NSDictionary;
@protocol NMSDeviceSourced, NMSObfuscatableDescriptionProviding;

#import <Foundation/Foundation.h>

#import "NMSMessageCenter.h"

@interface NMSIncomingFileTransfer : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSMessageContext *idsContext; // ivar: _idsContext
@property (copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (weak, nonatomic) NMSMessageCenter *messageCenter; // ivar: _messageCenter
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) id *pbHeaderInfo; // ivar: _pbHeaderInfo
@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (retain, nonatomic) NSString *sourceDeviceID; // ivar: sourceDeviceID
@property (readonly) Class superclass;


-(id)CPObfuscatedDescriptionObject;


@end


#endif