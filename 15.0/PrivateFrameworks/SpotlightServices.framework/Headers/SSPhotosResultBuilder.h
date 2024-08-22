// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSPHOTOSRESULTBUILDER_H
#define SSPHOTOSRESULTBUILDER_H



#import "SSResultBuilder.h"

@interface SSPhotosResultBuilder : SSResultBuilder

@property (nonatomic) BOOL isSyndicated; // ivar: _isSyndicated


+(BOOL)supportsResult:(id)arg0 ;
+(id)bundleId;
-(id)buildImageCardSection;
-(id)buildInlineCardSections;
-(id)buildResult;
-(id)initWithResult:(id)arg0 ;
-(id)oneUpPhotoCard;
-(id)subclassBuildHorizontallyScrollingCardSection;


@end


#endif