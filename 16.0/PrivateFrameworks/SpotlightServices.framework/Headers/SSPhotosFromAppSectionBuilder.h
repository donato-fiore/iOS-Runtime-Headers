// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSPHOTOSFROMAPPSECTIONBUILDER_H
#define SSPHOTOSFROMAPPSECTIONBUILDER_H

@class NSString;


#import "SSPhotosSectionBuilder.h"

@interface SSPhotosFromAppSectionBuilder : SSPhotosSectionBuilder

@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId


+(id)supportedBundleIds;
-(NSInteger)maxCardSections;
-(id)buildButtonItem;
-(id)buildTitle;
-(void)setSection:(id)arg0 ;


@end


#endif