// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUUPDATEDISCOVERYDATEMANAGER_H
#define SUUPDATEDISCOVERYDATEMANAGER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUUpdateDiscoveryDateManager : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSMutableArray *_buildVersionArray;
    NSMutableArray *_discoveryDateArray;
}




-(id)dictionaryRepresentation;
-(id)discoveryDateforBuildVersion:(id)arg0 ;
-(id)init;
-(id)initWithDiscoveryDateDictionary:(id)arg0 ;
-(void)dealloc;
-(void)setDiscoveryDate:(id)arg0 forBuildVersion:(id)arg1 ;


@end


#endif