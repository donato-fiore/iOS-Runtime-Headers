// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI29HEALTHURLACTIVITYITEMPROVIDER_H
#define _TTC18HEALTHEXPERIENCEUI29HEALTHURLACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider;



@interface _TtC18HealthExperienceUI29HealthURLActivityItemProvider : UIActivityItemProvider {
    ? title;
    ? url;
    ? image;
    ? thumbnailImage;
    ? summary;
}


@property (nonatomic, readonly) id *item;


-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)initWithPlaceholderItem:(id)arg0 ;


@end


#endif