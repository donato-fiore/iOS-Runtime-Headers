// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOEXPLOREGUIDES_H
#define GEOEXPLOREGUIDES_H


#import <Foundation/Foundation.h>

#import "GEOPDExploreGuides.h"
#import "GEOGuideLocation.h"

@interface GEOExploreGuides : NSObject {
    GEOPDExploreGuides *_pdExploreGuides;
}


@property (readonly, nonatomic) GEOGuideLocation *guideLocation;


-(BOOL)isEqual:(id)arg0 ;
-(id)imageDownloadUrlFromTemplateUrl:(id)arg0 size:(struct CGSize )arg1 ;
-(id)imageURLForSize:(struct CGSize )arg0 ;
-(id)initWithExploreGuides:(id)arg0 ;


@end


#endif