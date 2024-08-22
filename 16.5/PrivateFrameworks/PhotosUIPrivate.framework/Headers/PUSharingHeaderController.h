// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSHARINGHEADERCONTROLLER_H
#define PUSHARINGHEADERCONTROLLER_H

@class LPImage, LPLinkMetadata;
@protocol PXDisplayAsset, PUSharingHeaderDataProvider;

#import <Foundation/Foundation.h>


@interface PUSharingHeaderController : NSObject {
    LPImage *_icloudLinkImage;
    LPImage *_placeholderImage;
    id<PXDisplayAsset> *_sharingHeaderFrontAsset;
    id<PXDisplayAsset> *_sharingHeaderBackAsset;
}


@property (readonly, weak, nonatomic) NSObject<PUSharingHeaderDataProvider> *dataProvider; // ivar: _dataProvider
@property (retain, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata


+(id)new;
-(id)_linkPresentationImageForPerson:(id)arg0 ;
-(id)_sharingHeaderStatus;
-(id)createTextAttachmentForGlyphImageWithName:(id)arg0 ;
-(id)init;
-(id)initWithDataProvider:(id)arg0 ;
-(void)updateIfNeeded;


@end


#endif