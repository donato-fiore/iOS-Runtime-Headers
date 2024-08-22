// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFATTACHMENTLIBRARYDATAPROVIDER_H
#define MFATTACHMENTLIBRARYDATAPROVIDER_H

@class NSString, EDAttachmentPersistenceManager;
@protocol MFAttachmentDataProviderProtocol;

#import <Foundation/Foundation.h>

#import "MFMailMessageLibrary.h"

@interface MFAttachmentLibraryDataProvider : NSObject <MFAttachmentDataProviderProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) MFMailMessageLibrary *messageLibrary; // ivar: _messageLibrary
@property (retain, nonatomic) EDAttachmentPersistenceManager *persistenceManager; // ivar: _persistenceManager
@property (readonly) Class superclass;


-(id)initWithLibrary:(id)arg0 ;
-(id)messageForAttachment:(id)arg0 ;
-(id)storageLocationForAttachment:(id)arg0 withMessage:(id)arg1 ;
-(struct _MFAttachmentDataFetchResult )_fetchDataForAttachment:(id)arg0 consumer:(id)arg1 progress:(id)arg2 ;
-(void)fetchDataForAttachment:(id)arg0 consumer:(id)arg1 progress:(id)arg2 completion:(id)arg3 ;


@end


#endif