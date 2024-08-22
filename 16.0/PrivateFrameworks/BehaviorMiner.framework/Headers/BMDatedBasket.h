// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDATEDBASKET_H
#define BMDATEDBASKET_H

@class NSSet, NSDate;

#import <Foundation/Foundation.h>


@interface BMDatedBasket : NSObject

@property (readonly, copy, nonatomic) NSSet *basket; // ivar: _basket
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date


+(id)undated:(id)arg0 ;
-(id)initWithBasket:(id)arg0 Date:(id)arg1 ;


@end


#endif