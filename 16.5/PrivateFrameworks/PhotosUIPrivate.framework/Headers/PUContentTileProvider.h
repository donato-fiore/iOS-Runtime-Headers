// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCONTENTTILEPROVIDER_H
#define PUCONTENTTILEPROVIDER_H

@class UIWindow;

#import <Foundation/Foundation.h>

#import "PUMediaProvider.h"

@interface PUContentTileProvider : NSObject

@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(id)init;
-(id)initWithMediaProvider:(id)arg0 ;
-(id)tileControllerForAsset:(id)arg0 viewModel:(id)arg1 tilingView:(id)arg2 ;
-(void)registerTileControllerClassesWithTilingView:(id)arg0 ;


@end


#endif