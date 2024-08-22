// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASXPCLISTENER_H
#define _PASXPCLISTENER_H

@class NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface _PASXPCListener : NSObject

@property (readonly, nonatomic) NSObject<NSXPCListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName


-(id)init;
-(id)initWithDelegate:(id)arg0 serviceName:(id)arg1 displayName:(id)arg2 ;


@end


#endif