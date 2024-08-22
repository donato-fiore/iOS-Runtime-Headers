// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDSHAREDUTILITIESPLUGINPAYLOAD_H
#define IMDSHAREDUTILITIESPLUGINPAYLOAD_H

@class NSArray, NSData, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface IMDSharedUtilitiesPluginPayload : NSObject

@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (retain, nonatomic) NSArray *consumedSessionPayloads; // ivar: _consumedSessionPayloads
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) id *dataDetectedResult; // ivar: _dataDetectedResult
@property (weak, nonatomic) id *datasource; // ivar: _datasource
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (copy, nonatomic) NSString *messageGUID; // ivar: _messageGUID
@property (retain, nonatomic) NSString *pluginBundleID; // ivar: _pluginBundleID
@property (readonly, nonatomic) BOOL supportsCollaboration;
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(void)dealloc;


@end


#endif