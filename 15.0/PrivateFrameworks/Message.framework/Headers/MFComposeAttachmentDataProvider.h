// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFCOMPOSEATTACHMENTDATAPROVIDER_H
#define MFCOMPOSEATTACHMENTDATAPROVIDER_H

@class NSMutableDictionary, NSCache, NSString;
@protocol MFAttachmentDataProviderProtocol;

#import <Foundation/Foundation.h>


@interface MFComposeAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>

 {
    NSMutableDictionary *_attachmentsData;
    NSCache *_attachmentsPlaceholderData;
    NSMutableDictionary *_attachmentsPasteboardData;
    NSMutableDictionary *_attachmentsUndoData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_dataForAttachment:(id)arg0 ;
-(id)dataForContentID:(id)arg0 ;
-(id)initWithAttachmentDataItemProvider:(id)arg0 forContentID:(id)arg1 ;
-(id)initWithData:(id)arg0 forContentID:(id)arg1 ;
-(id)messageForAttachment:(id)arg0 ;
-(id)rawDataForContentID:(id)arg0 ;
-(id)storageLocationForAttachment:(id)arg0 withMessage:(id)arg1 ;
-(void)_commonInitWithDataProvider:(id)arg0 forContentID:(id)arg1 ;
-(void)addData:(id)arg0 forContentID:(id)arg1 ;
-(void)addDataItemProvider:(id)arg0 forContentID:(id)arg1 ;
-(void)fetchDataForAttachment:(id)arg0 consumer:(id)arg1 progress:(id)arg2 completion:(id)arg3 ;
-(void)recordPasteboardDataForAttachments:(id)arg0 ;
-(void)recordUndoDataForAttachments:(id)arg0 ;
-(void)removeDataForAttachment:(id)arg0 ;


@end


#endif