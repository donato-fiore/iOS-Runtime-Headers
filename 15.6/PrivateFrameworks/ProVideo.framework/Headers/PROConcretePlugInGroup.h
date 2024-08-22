// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PROCONCRETEPLUGINGROUP_H
#define PROCONCRETEPLUGINGROUP_H

@class NSMutableArray, NSString, NSMutableDictionary, NSLock;

#import <Foundation/Foundation.h>


@interface PROConcretePlugInGroup : NSObject {
    NSMutableArray *plugIns;
    *__CFUUID uuidRef;
    NSString *name;
    NSString *displayName;
    NSMutableDictionary *protocols;
    NSLock *mutex;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPlugInGroup:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)displayName;
-(id)initWithUUID:(struct __CFUUID *)arg0 name:(id)arg1 bundle:(id)arg2 ;
-(id)name;
-(id)plugIns;
-(id)plugInsForProtocols:(id)arg0 ;
-(id)uuidString;
-(struct __CFUUID *)uuid;
-(void)addPlugIn:(id)arg0 ;
-(void)dealloc;
-(void)removePlugIn:(id)arg0 ;


@end


#endif