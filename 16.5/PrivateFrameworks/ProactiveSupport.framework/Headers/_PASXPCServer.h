// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASXPCSERVER_H
#define _PASXPCSERVER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _PASXPCServer : NSObject {
    NSArray *_XPCListeners;
}




+(id)description;
+(void)registerForService:(id)arg0 delegate:(id)arg1 ;
-(id)init;
-(id)initWithXPCListeners:(id)arg0 logHandle:(id)arg1 ;
-(void)registerXPCListeners;


@end


#endif