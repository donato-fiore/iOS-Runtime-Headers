// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASCELLULARRADIOACCESSTECHNOLOGY_H
#define ICASCELLULARRADIOACCESSTECHNOLOGY_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASCellularRadioAccessTechnology : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger cellularRadioAccessTechnology; // ivar: _cellularRadioAccessTechnology


-(id)initWithCellularRadioAccessTechnology:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif