// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSTYLETYPE_H
#define ICASSTYLETYPE_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASStyleType : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger styleType; // ivar: _styleType


-(id)initWithStyleType:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif