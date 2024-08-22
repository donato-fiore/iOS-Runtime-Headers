// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFRFC822ATTACHMENTDATAPROVIDER_H
#define MFRFC822ATTACHMENTDATAPROVIDER_H

@class NSData, NSString;
@protocol MFAttachmentDataProviderProtocol;

#import <Foundation/Foundation.h>

#import "MFMailMessage.h"

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>

 {
    NSData *_messageData;
    MFMailMessage *_message;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMessage:(id)arg0 ;
-(id)initWithMessage:(id)arg0 managed:(BOOL)arg1 ;
-(id)initWithMessageData:(id)arg0 parentPart:(id)arg1 ;
-(id)initWithMessageData:(id)arg0 parentPart:(id)arg1 managed:(BOOL)arg2 ;
-(id)messageForAttachment:(id)arg0 ;
-(id)storageLocationForAttachment:(id)arg0 withMessage:(id)arg1 ;
-(void)fetchDataForAttachment:(id)arg0 consumer:(id)arg1 progress:(id)arg2 completion:(id)arg3 ;


@end


#endif