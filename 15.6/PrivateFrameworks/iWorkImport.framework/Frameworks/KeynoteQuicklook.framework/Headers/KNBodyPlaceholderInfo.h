// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNBODYPLACEHOLDERINFO_H
#define KNBODYPLACEHOLDERINFO_H



#import "KNPlaceholderInfo.h"

@interface KNBodyPlaceholderInfo : KNPlaceholderInfo



+(id)mixableObjectClasses;
-(id)copyToInstantiateMasterPlaceholder;
-(id)initWithKNPlaceholderInfo:(id)arg0 ;
-(id)typeName;
-(int)kind;
-(void)acceptVisitor:(id)arg0 ;


@end


#endif