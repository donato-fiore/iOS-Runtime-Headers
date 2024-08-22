// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIBADGETEXTATTACHMENTLOADER_H
#define SKUIBADGETEXTATTACHMENTLOADER_H

@class NSMapTable, NSHashTable, NSString;
@protocol SKUIArtworkRequestDelegate;

#import <Foundation/Foundation.h>

#import "SKUIResourceLoader.h"

@interface SKUIBadgeTextAttachmentLoader : NSObject <SKUIArtworkRequestDelegate>

 {
    NSMapTable *_imageRequests;
    SKUIResourceLoader *_resourceLoader;
    NSHashTable *_stringViews;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)loadImageForBadge:(id)arg0 layout:(id)arg1 reason:(NSInteger)arg2 ;
-(id)initWithResourceLoader:(id)arg0 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)connectStringView:(id)arg0 ;
-(void)disconnectStringView:(id)arg0 ;


@end


#endif