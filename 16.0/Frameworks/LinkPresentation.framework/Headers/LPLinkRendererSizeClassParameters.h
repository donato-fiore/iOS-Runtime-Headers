// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPLINKRENDERERSIZECLASSPARAMETERS_H
#define LPLINKRENDERERSIZECLASSPARAMETERS_H


#import <Foundation/Foundation.h>


@interface LPLinkRendererSizeClassParameters : NSObject

@property (nonatomic) BOOL alignButtonWithCaptionTextLeadingEdge; // ivar: _alignButtonWithCaptionTextLeadingEdge
@property (nonatomic) BOOL disableTextWrapping; // ivar: _disableTextWrapping
@property (nonatomic) BOOL onlyShowIcon; // ivar: _onlyShowIcon
@property (nonatomic) BOOL preserveIconAspectRatioAndAlignmentWhenScaling; // ivar: _preserveIconAspectRatioAndAlignmentWhenScaling


-(BOOL)isEqual:(id)arg0 ;
-(id)_cacheKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif