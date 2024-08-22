// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDEFAULTAUDIOCOMPONENTCLASSIFICATION_H
#define SXDEFAULTAUDIOCOMPONENTCLASSIFICATION_H



#import "SXComponentClassification.h"

@interface SXDefaultAudioComponentClassification : SXComponentClassification



+(id)roleString;
+(id)typeString;
+(int)role;
-(BOOL)hasAffiliationWithClassification:(id)arg0 forDirection:(NSInteger)arg1 ;
-(Class)componentModelClass;
-(id)layoutRules;


@end


#endif