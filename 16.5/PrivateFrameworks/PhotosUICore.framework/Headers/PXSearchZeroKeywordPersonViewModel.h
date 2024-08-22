// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSEARCHZEROKEYWORDPERSONVIEWMODEL_H
#define PXSEARCHZEROKEYWORDPERSONVIEWMODEL_H

@class PHPerson;


#import "PXSearchZeroKeywordBaseViewModel.h"

@interface PXSearchZeroKeywordPersonViewModel : PXSearchZeroKeywordBaseViewModel

@property (readonly, nonatomic) PHPerson *person; // ivar: _person


-(id)debugDictionary;
-(id)initWithRepresentedObject:(id)arg0 representedPerson:(id)arg1 ;
-(id)title;


@end


#endif