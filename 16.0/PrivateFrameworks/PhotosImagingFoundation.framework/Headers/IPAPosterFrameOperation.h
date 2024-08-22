// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPAPOSTERFRAMEOPERATION_H
#define IPAPOSTERFRAMEOPERATION_H



#import "IPAVideoOperation.h"

@interface IPAPosterFrameOperation : IPAVideoOperation

@property (readonly, nonatomic) ? frameTime; // ivar: _frameTime


-(BOOL)isEqualToOperation:(id)arg0 ;
-(BOOL)isMigratable;
-(id)debugDescription;
-(id)identifier;
-(id)initWithFrameTime:(struct ? )arg0 ;
-(id)initWithOperation:(id)arg0 ;
-(id)initWithSettingsDictionary:(id)arg0 ;
-(id)settingsDictionary;


@end


#endif