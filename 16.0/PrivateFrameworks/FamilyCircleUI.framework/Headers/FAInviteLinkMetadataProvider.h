// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAINVITELINKMETADATAPROVIDER_H
#define FAINVITELINKMETADATAPROVIDER_H

@class FAInviteContext;

#import <Foundation/Foundation.h>


@interface FAInviteLinkMetadataProvider : NSObject {
    FAInviteContext *_context;
}




-(id)_colorForString:(id)arg0 ;
-(id)_defaultIcon;
-(id)_defaultImage;
-(id)_imageNamed:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)linkMetadataWithImage:(id)arg0 icon:(id)arg1 ;
-(void)fetchImageFromURL:(id)arg0 completion:(id)arg1 ;
-(void)loadImageWithURL:(id)arg0 enableTextOverlay:(BOOL)arg1 completion:(id)arg2 ;
-(void)loadMetatadataWithCompletion:(id)arg0 ;


@end


#endif