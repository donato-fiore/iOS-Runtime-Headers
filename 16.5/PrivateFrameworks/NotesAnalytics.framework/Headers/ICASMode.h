// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASMODE_H
#define ICASMODE_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASMode : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger mode; // ivar: _mode


-(id)initWithMode:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif