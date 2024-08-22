// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUICOREFAMILYINFO_H
#define CNUICOREFAMILYINFO_H

@class NSArray, CNContact;

#import <Foundation/Foundation.h>


@interface CNUICoreFamilyInfo : NSObject

@property (readonly, nonatomic) NSArray *elements; // ivar: _elements
@property (readonly, nonatomic) CNContact *meContact; // ivar: _meContact


-(id)description;
-(id)init;
-(id)initWithMeContact:(id)arg0 elements:(id)arg1 ;


@end


#endif