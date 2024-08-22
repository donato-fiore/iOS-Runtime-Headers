// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FKORDERMESSAGESPREVIEWMETADATA_H
#define FKORDERMESSAGESPREVIEWMETADATA_H


#import <Foundation/Foundation.h>

#import "FKOrderMessagesPreviewMetadataImage.h"
#import "FKOrderMessagesPreviewMetadataText.h"

@interface FKOrderMessagesPreviewMetadata : NSObject

@property (readonly, nonatomic) *CGColor backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) FKOrderMessagesPreviewMetadataImage *headerImage; // ivar: _headerImage
@property (readonly, nonatomic) FKOrderMessagesPreviewMetadataText *primaryText; // ivar: _primaryText
@property (readonly, nonatomic) FKOrderMessagesPreviewMetadataText *secondaryText; // ivar: _secondaryText
@property (readonly, nonatomic) FKOrderMessagesPreviewMetadataText *tertiaryText; // ivar: _tertiaryText


+(id)walletDeepLinkForExistingOrderAtURL:(id)arg0 ;
-(id)initWithOrderData:(id)arg0 workingDirectory:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif