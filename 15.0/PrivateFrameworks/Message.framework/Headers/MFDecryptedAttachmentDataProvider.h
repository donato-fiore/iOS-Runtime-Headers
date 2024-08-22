// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFDECRYPTEDATTACHMENTDATAPROVIDER_H
#define MFDECRYPTEDATTACHMENTDATAPROVIDER_H

@class NSString;
@protocol MFAttachmentDataProviderProtocol;

#import <Foundation/Foundation.h>

#import "MFMailMessage.h"

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>

 {
    MFMailMessage *_message;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDecryptedMessage:(id)arg0 ;
-(id)messageForAttachment:(id)arg0 ;
-(id)storageLocationForAttachment:(id)arg0 withMessage:(id)arg1 ;
-(void)fetchDataForAttachment:(id)arg0 consumer:(id)arg1 progress:(id)arg2 completion:(id)arg3 ;


@end


#endif