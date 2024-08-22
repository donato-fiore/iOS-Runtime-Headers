// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHLIBRARYADDITIONALITEMSINDICATORICON_H
#define SBHLIBRARYADDITIONALITEMSINDICATORICON_H



#import "SBFolderIcon.h"
#import "SBHLibraryCategory.h"

@interface SBHLibraryAdditionalItemsIndicatorIcon : SBFolderIcon

@property (readonly, weak, nonatomic) SBHLibraryCategory *category; // ivar: _category


-(BOOL)isAdditionalItemsIndicatorIcon;
-(Class)iconImageViewClassForLocation:(id)arg0 ;
-(id)initWithCategory:(id)arg0 ;


@end


#endif