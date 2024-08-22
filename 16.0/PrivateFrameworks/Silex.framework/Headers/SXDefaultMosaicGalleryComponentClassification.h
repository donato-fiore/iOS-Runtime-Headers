// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDEFAULTMOSAICGALLERYCOMPONENTCLASSIFICATION_H
#define SXDEFAULTMOSAICGALLERYCOMPONENTCLASSIFICATION_H



#import "SXComponentClassification.h"

@interface SXDefaultMosaicGalleryComponentClassification : SXComponentClassification



+(id)roleString;
+(id)typeString;
+(int)role;
-(BOOL)hasAffiliationWithClassification:(id)arg0 forDirection:(NSInteger)arg1 ;
-(Class)componentModelClass;
-(id)accessibilityContextualLabel;
-(id)layoutRules;


@end


#endif