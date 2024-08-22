// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DISCOVERHOMEINTENT_H
#define DISCOVERHOMEINTENT_H

@class INIntent, NSArray;



@interface DiscoverHomeIntent : INIntent

@property (nonatomic) NSInteger discoveryType;
@property (nonatomic, copy) NSArray *filters;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif