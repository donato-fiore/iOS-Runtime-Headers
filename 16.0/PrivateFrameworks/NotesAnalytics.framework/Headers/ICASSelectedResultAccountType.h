// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSELECTEDRESULTACCOUNTTYPE_H
#define ICASSELECTEDRESULTACCOUNTTYPE_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASSelectedResultAccountType : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger selectedResultAccountType; // ivar: _selectedResultAccountType


-(id)initWithSelectedResultAccountType:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif