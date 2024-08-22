// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDEFAULTSTRIPGALLERYCOMPONENTCLASSIFICATION_H
#define SXDEFAULTSTRIPGALLERYCOMPONENTCLASSIFICATION_H



#import "SXComponentClassification.h"

@interface SXDefaultStripGalleryComponentClassification : SXComponentClassification



+(id)roleString;
+(id)typeString;
+(int)role;
-(BOOL)hasAffiliationWithClassification:(id)arg0 forDirection:(NSInteger)arg1 ;
-(Class)componentModelClass;
-(id)accessibilityContextualLabel;
-(id)layoutRules;


@end


#endif