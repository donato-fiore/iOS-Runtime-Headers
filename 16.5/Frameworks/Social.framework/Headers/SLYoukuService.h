// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLYOUKUSERVICE_H
#define SLYOUKUSERVICE_H



#import "SLService.h"

@interface SLYoukuService : SLService



-(BOOL)isFirstClassService;
-(NSInteger)authenticationStyle;
-(id)accountTypeIdentifier;
-(id)serviceType;


@end


#endif