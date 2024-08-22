// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __FKORDERMESSAGESPREVIEWMETADATA_H
#define __FKORDERMESSAGESPREVIEWMETADATA_H


#import <Foundation/Foundation.h>

#import "__FKOrderMessagesPreviewMetadataImage.h"
#import "__FKOrderMessagesPreviewMetadataText.h"

@interface __FKOrderMessagesPreviewMetadata : NSObject

@property (nonatomic, readonly) *CGColor backgroundColor; // ivar: backgroundColor
@property (nonatomic, readonly) __FKOrderMessagesPreviewMetadataImage *image; // ivar: image
@property (nonatomic, readonly) __FKOrderMessagesPreviewMetadataText *primaryText; // ivar: primaryText
@property (nonatomic, readonly) __FKOrderMessagesPreviewMetadataText *secondaryText; // ivar: secondaryText
@property (nonatomic, readonly) __FKOrderMessagesPreviewMetadataText *tertiaryText; // ivar: tertiaryText


+(id)createWalletDeepLinkForExistingOrderAt:(id)arg0 ;
-(id)init;
-(id)initWithOrderData:(id)arg0 error:(*id)arg1 ;
-(id)initWithOrderData:(id)arg0 workingDirectory:(id)arg1 error:(*id)arg2 ;


@end


#endif