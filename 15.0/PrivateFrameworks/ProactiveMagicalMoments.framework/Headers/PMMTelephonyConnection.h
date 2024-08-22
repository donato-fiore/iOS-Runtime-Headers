// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMMTELEPHONYCONNECTION_H
#define PMMTELEPHONYCONNECTION_H


#import <Foundation/Foundation.h>


@interface PMMTelephonyConnection : NSObject {
    *__CTServerConnection _ctServerConnnectionRef;
}


@property (readonly, nonatomic) BOOL phoneCallActiveOrHeld;


-(id)init;
-(void)dealloc;


@end


#endif