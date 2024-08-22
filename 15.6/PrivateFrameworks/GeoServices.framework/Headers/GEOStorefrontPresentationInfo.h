// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSTOREFRONTPRESENTATIONINFO_H
#define GEOSTOREFRONTPRESENTATIONINFO_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "GEOStorefrontView.h"

@interface GEOStorefrontPresentationInfo : NSObject

@property (readonly, nonatomic) GEOStorefrontView *closeUpView; // ivar: _closeUpView
@property (readonly, nonatomic) NSURL *overlayImageURL; // ivar: _overlayImageURL
@property (readonly, nonatomic) GEOStorefrontView *standOffView; // ivar: _standOffView


-(id)init;
-(id)initWithStorefrontPresentation:(id)arg0 ;


@end


#endif