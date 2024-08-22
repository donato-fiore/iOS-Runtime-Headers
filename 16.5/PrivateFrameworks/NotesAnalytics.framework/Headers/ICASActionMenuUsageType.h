// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASACTIONMENUUSAGETYPE_H
#define ICASACTIONMENUUSAGETYPE_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASActionMenuUsageType : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger actionMenuUsageType; // ivar: _actionMenuUsageType


-(id)initWithActionMenuUsageType:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif