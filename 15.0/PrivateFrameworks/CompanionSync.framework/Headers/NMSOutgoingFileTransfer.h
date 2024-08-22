// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSOUTGOINGFILETRANSFER_H
#define NMSOUTGOINGFILETRANSFER_H

@class NSString, NSDictionary, NSURL, NSSet;
@protocol NMSDeviceTargetable, NMSObfuscatableDescriptionProviding;

#import <Foundation/Foundation.h>

#import "NMSMessageCenter.h"

@interface NMSOutgoingFileTransfer : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *extraIDSOptions; // ivar: _extraIDSOptions
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (weak, nonatomic) NMSMessageCenter *messageCenter; // ivar: _messageCenter
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) id *pbHeaderInfo; // ivar: _pbHeaderInfo
@property (retain, nonatomic) NSDictionary *persistentUserInfo; // ivar: _persistentUserInfo
@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (nonatomic) CGFloat sendTimeout; // ivar: _sendTimeout
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *targetDeviceIDs; // ivar: targetDeviceIDs


-(id)CPObfuscatedDescriptionObject;


@end


#endif