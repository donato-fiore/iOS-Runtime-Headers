// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCOMPLICATIONSUGGESTIONSET_H
#define PRCOMPLICATIONSUGGESTIONSET_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PRComplicationSuggestionSet : NSObject

@property (readonly, nonatomic) NSArray *descriptors; // ivar: _descriptors
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDescriptors:(id)arg0 localizedTitle:(id)arg1 ;


@end


#endif