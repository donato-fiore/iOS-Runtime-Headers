// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12PHOTOSUIAPPS35PHOTOSDETAILSNOLOCATIONSEARCHRESULT_H
#define _TTC12PHOTOSUIAPPS35PHOTOSDETAILSNOLOCATIONSEARCHRESULT_H

@class NSString;
@protocol PXPhotosDetailsLocationSearchResult;

#import <Foundation/Foundation.h>


@interface _TtC12PhotosUIApps35PhotosDetailsNoLocationSearchResult : NSObject <PXPhotosDetailsLocationSearchResult>

 {
    ? id;
    ? title;
    ? subtitle;
    ? image;
    ? imageColor;
}


@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;


-(id)init;


@end


#endif