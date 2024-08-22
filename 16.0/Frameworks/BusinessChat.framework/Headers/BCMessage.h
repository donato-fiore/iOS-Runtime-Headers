// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCMESSAGE_H
#define BCMESSAGE_H

@class NSString, NSData, NSDictionary, UIImage, NSAttributedString, NSURL;
@protocol BCDictionarySerializable;

#import <Foundation/Foundation.h>

#import "BCImageStore.h"
#import "BCMessageData.h"
#import "BCMessageInfo.h"

@interface BCMessage : NSObject {
    BOOL _isFromMe;
    NSInteger _version;
    NSString *_requestIdentifier;
    NSString *_messageGUID;
    id<BCDictionarySerializable> *_rootObject;
    BCImageStore *_imageStore;
    BCMessageData *_messageData;
    BCMessageInfo *_receivedMessage;
    BCMessageInfo *_replyMessage;
    NSString *_internalRootKey;
}


@property (retain, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) BCImageStore *imageStore;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL isVersionSupported;
@property (readonly, nonatomic) BCMessageData *messageData;
@property (readonly, nonatomic) NSString *messageGUID;
@property (readonly, nonatomic) BCMessageInfo *receivedMessage;
@property (readonly, nonatomic) BCMessageInfo *replyMessage;
@property (readonly, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) NSString *rootKey;
@property (readonly, nonatomic) NSObject<BCDictionarySerializable> *rootObject;
@property (readonly, nonatomic) NSInteger style;
@property (retain, nonatomic) NSString *subcaption; // ivar: _subcaption
@property (retain, nonatomic) NSAttributedString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *summaryText; // ivar: _summaryText
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSInteger version;


+(id)defaultBubbleTitleFor:(id)arg0 ;
-(id)initFromOriginalMessage:(id)arg0 rootKey:(id)arg1 rootObject:(id)arg2 receivedMessage:(id)arg3 replyMessage:(id)arg4 ;
-(id)initWithData:(id)arg0 url:(id)arg1 isFromMe:(BOOL)arg2 ;
-(id)initWithData:(id)arg0 url:(id)arg1 messageGUID:(id)arg2 isFromMe:(BOOL)arg3 ;
-(id)makeRootObjectWithMessageData:(id)arg0 dictionary:(id)arg1 imageDictionary:(id)arg2 version:(NSInteger)arg3 ;


@end


#endif