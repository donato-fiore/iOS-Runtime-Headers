// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSEARCHZEROKEYWORDPERSONVIEWMODEL_H
#define PUSEARCHZEROKEYWORDPERSONVIEWMODEL_H

@class PHPerson;


#import "PUSearchZeroKeywordBaseViewModel.h"

@interface PUSearchZeroKeywordPersonViewModel : PUSearchZeroKeywordBaseViewModel

@property (readonly, nonatomic) PHPerson *person; // ivar: _person


-(id)debugDictionary;
-(id)initWithRepresentedObject:(id)arg0 representedPerson:(id)arg1 ;
-(id)title;


@end


#endif