// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTKPCPUEVENT_H
#define DTKPCPUEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DTKPCPUEvent : NSObject {
    *kpep_event _kpepEvent;
    NSString *_displayName;
}


@property (retain, nonatomic) NSString *alias; // ivar: _alias
@property (readonly, retain, nonatomic) NSString *aliasOrName;
@property (readonly, retain, nonatomic) NSString *definition; // ivar: _definition
@property (readonly, retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) *kpep_event kpepEvent;
@property (readonly, retain, nonatomic) NSString *name; // ivar: _name


-(id)description;
-(id)initWithName:(id)arg0 alias:(id)arg1 definition:(id)arg2 kpepEvent:(struct kpep_event *)arg3 ;


@end


#endif