// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLIBRARYSERVICESSTATENODE_H
#define PLLIBRARYSERVICESSTATENODE_H

@class NSString, NSOperationQueue;

#import <Foundation/Foundation.h>


@interface PLLibraryServicesStateNode : NSObject

@property (readonly, copy) NSString *logPrefix; // ivar: _logPrefix
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (nonatomic) unsigned int qos; // ivar: _qos
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(id)description;
-(id)initWithLibraryServicesState:(NSInteger)arg0 qualityOfService:(unsigned int)arg1 logPrefix:(id)arg2 ;
-(void)run;
-(void)terminate;


@end


#endif