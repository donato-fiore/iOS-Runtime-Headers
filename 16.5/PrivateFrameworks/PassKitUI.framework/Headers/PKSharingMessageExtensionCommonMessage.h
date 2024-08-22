// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHARINGMESSAGEEXTENSIONCOMMONMESSAGE_H
#define PKSHARINGMESSAGEEXTENSIONCOMMONMESSAGE_H

@class PKProtobufCommonSharingMessage, NSURL, NSString, NSData, UIImage;
@protocol PKSharingMessageExtensionMessage;

#import <Foundation/Foundation.h>


@interface PKSharingMessageExtensionCommonMessage : NSObject <PKSharingMessageExtensionMessage>

 {
    PKProtobufCommonSharingMessage *_message;
}


@property (retain, nonatomic) NSURL *actionURL;
@property (retain, nonatomic) NSString *buttonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (nonatomic) BOOL isPending; // ivar: _isPending
@property (retain, nonatomic) NSData *messageData;
@property (retain, nonatomic) NSString *messageType;
@property (retain, nonatomic) NSData *rawThumbnailData;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *topLeftTitle;
@property (retain, nonatomic) NSString *topRightTitle;


+(id)_messageDataWithDataURL:(id)arg0 prefix:(id)arg1 ;
+(id)messageTypeFromURL:(id)arg0 ;
-(id)_initWithCommonMessage:(id)arg0 url:(id)arg1 ;
-(id)_messageDataURLWithData:(id)arg0 prefix:(id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)urlRepresentation;


@end


#endif