// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPASLOMOOPERATION_H
#define IPASLOMOOPERATION_H



#import "IPAVideoOperation.h"

@interface IPASloMoOperation : IPAVideoOperation {
    ? _timeRange;
    float _rate;
}


@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) ? timeRange;


+(id)operationFromFileURL:(id)arg0 ;
-(BOOL)isEqualToOperation:(id)arg0 ;
-(BOOL)isMigratable;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)identifier;
-(id)initWithOperation:(id)arg0 ;
-(id)initWithSettingsDictionary:(id)arg0 ;
-(id)initWithTimeRange:(struct ? )arg0 rate:(float)arg1 ;
-(id)internalRepresentation;
-(id)settingsDictionary;


@end


#endif