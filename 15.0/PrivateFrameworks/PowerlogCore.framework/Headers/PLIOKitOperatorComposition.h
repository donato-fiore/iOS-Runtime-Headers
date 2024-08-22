// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLIOKITOPERATORCOMPOSITION_H
#define PLIOKITOPERATORCOMPOSITION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PLOperator.h"

@interface PLIOKitOperatorComposition : NSObject

@property unsigned int conn; // ivar: _conn
@property *IONotificationPort ioNotifyPort; // ivar: _ioNotifyPort
@property unsigned int iterator; // ivar: _iterator
@property (copy, nonatomic) id *matchBlock; // ivar: _matchBlock
@property unsigned int notificationRef; // ivar: _notificationRef
@property (retain) PLOperator *operator; // ivar: _operator
@property (copy, nonatomic) id *operatorBlock; // ivar: _operatorBlock
@property unsigned int service; // ivar: _service
@property (retain) NSString *serviceClassName; // ivar: _serviceClassName
@property (retain) NSString *serviceName; // ivar: _serviceName


+(id)snapshotFromIOEntry:(unsigned int)arg0 ;
+(id)snapshotFromIOEntry:(unsigned int)arg0 forKey:(id)arg1 ;
-(id)initWithOperator:(id)arg0 forDynamicServiceClass:(id)arg1 forNotificationType:(char)arg2 withMatchBlock:(id)arg3 ;
-(id)initWithOperator:(id)arg0 forService:(id)arg1 ;
-(id)initWithOperator:(id)arg0 forService:(id)arg1 withBlock:(id)arg2 ;
-(id)initWithOperator:(id)arg0 forServiceClass:(id)arg1 ;
-(id)initWithOperator:(id)arg0 forServiceClass:(id)arg1 withBlock:(id)arg2 ;
-(id)properties;
-(id)propertiesForKey:(id)arg0 ;
-(id)propertiesFromIOEntry:(unsigned int)arg0 ;
-(id)propertiesFromIOEntry:(unsigned int)arg0 forKey:(id)arg1 ;
-(void)dealloc;


@end


#endif