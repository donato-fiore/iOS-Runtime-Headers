// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASFILTERCONDITION_H
#define ICASFILTERCONDITION_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASFilterCondition : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger filterCondition; // ivar: _filterCondition


-(id)initWithFilterCondition:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif