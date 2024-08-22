// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DSHAREGROUPPOOLSHAREGROUPTOKEN_H
#define TSCH3DSHAREGROUPPOOLSHAREGROUPTOKEN_H

@protocol NSCopying;


#import "TSCH3DSharegroupToken.h"

@interface TSCH3DSharegroupPoolSharegroupToken : TSCH3DSharegroupToken <NSCopying>





+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)token;
-(BOOL)isOneShot;
-(BOOL)shouldGarbageCollect;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)tokenSharegroup;
-(void)deleteTokenSharegroup;
-(void)didRemoveAllInterests;
-(void)flushTokenSharegroup;
-(void)releaseSharegroup:(id)arg0 ;


@end


#endif