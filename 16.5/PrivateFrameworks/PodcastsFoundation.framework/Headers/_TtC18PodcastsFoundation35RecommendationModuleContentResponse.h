// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PODCASTSFOUNDATION35RECOMMENDATIONMODULECONTENTRESPONSE_H
#define _TTC18PODCASTSFOUNDATION35RECOMMENDATIONMODULECONTENTRESPONSE_H

@class SwiftObject;
@protocol MTMAPIResponse;



@interface _TtC18PodcastsFoundation35RecommendationModuleContentResponse : SwiftObject <MTMAPIResponse>

 {
    ? serverObjects;
}




-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)itemInSection:(NSInteger)arg0 row:(NSInteger)arg1 ;
-(id)itemsFor:(NSInteger)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;


@end


#endif