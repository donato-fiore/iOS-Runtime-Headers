// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FINDVIDEOINTENT_H
#define FINDVIDEOINTENT_H

@class INIntent, NSArray;


#import "ContentSearch.h"

@interface FindVideoIntent : INIntent

@property (nonatomic, copy) NSArray *content;
@property (nonatomic, retain) ContentSearch *contentSearch;
@property (nonatomic, copy) NSArray *suggestedContent;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif