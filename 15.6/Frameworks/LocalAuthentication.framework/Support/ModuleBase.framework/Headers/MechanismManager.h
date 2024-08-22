// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MECHANISMMANAGER_H
#define MECHANISMMANAGER_H

@class NSMutableDictionary, MechanismContext;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MechanismManager : NSObject {
    NSMutableDictionary *_plugins;
    MechanismContext *_mechanismContext;
}


@property (readonly, nonatomic) NSInteger evaluatedPolicy; // ivar: _evaluatedPolicy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // ivar: _serverQueue


-(BOOL)_canLoadPlugin:(NSInteger)arg0 className:(id)arg1 userId:(id)arg2 error:(*id)arg3 ;
-(id)_pathForPlugin:(NSInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)loadMechanism:(NSInteger)arg0 initParams:(id)arg1 request:(id)arg2 className:(id)arg3 error:(*id)arg4 ;
-(id)loadMechanism:(NSInteger)arg0 initParams:(id)arg1 request:(id)arg2 error:(*id)arg3 ;
-(void)_logClass:(Class)arg0 tag:(id)arg1 ;
-(void)_logClass:(Class)arg0 tag:(id)arg1 level:(int)arg2 ;


@end


#endif