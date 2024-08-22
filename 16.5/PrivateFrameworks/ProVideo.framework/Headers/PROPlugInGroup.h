// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PROPLUGINGROUP_H
#define PROPLUGINGROUP_H


#import <Foundation/Foundation.h>


@interface PROPlugInGroup : NSObject



+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)displayName;
-(id)initWithUUID:(struct __CFUUID *)arg0 name:(id)arg1 bundle:(id)arg2 ;
-(id)name;
-(id)plugIns;
-(id)plugInsForProtocols:(id)arg0 ;
-(struct __CFUUID *)uuid;
-(void)addPlugIn:(id)arg0 ;
-(void)removePlugIn:(id)arg0 ;


@end


#endif