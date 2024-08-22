// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPATRIMOPERATION_H
#define IPATRIMOPERATION_H



#import "IPAVideoOperation.h"

@interface IPATrimOperation : IPAVideoOperation

@property (readonly, nonatomic) ? endTime; // ivar: _endTime
@property (readonly, nonatomic) ? startTime; // ivar: _startTime
@property (readonly, nonatomic) ? trimRange;


-(BOOL)isEqualToOperation:(id)arg0 ;
-(id)debugDescription;
-(id)identifier;
-(id)initWithOperation:(id)arg0 ;
-(id)initWithSettingsDictionary:(id)arg0 ;
-(id)initWithStartTime:(struct ? )arg0 endTime:(struct ? )arg1 ;
-(id)initWithTrimRange:(struct ? )arg0 ;
-(id)settingsDictionary;


@end


#endif