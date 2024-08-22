// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECNWACTIVITY_H
#define ECNWACTIVITY_H

@protocol OS_nw_activity, OS_nw_connection;

#import <Foundation/Foundation.h>


@interface ECNWActivity : NSObject {
    NSObject<OS_nw_activity> *_activity;
    NSObject<OS_nw_connection> *_currentConnection;
}




+(void)attachCurrentActivityToConnection:(id)arg0 ;
+(void)detachCurrentActivityFromConnection:(id)arg0 ;
-(id)initWithDomain:(unsigned int)arg0 type:(unsigned int)arg1 ;
-(void)startActivity;
-(void)stopActivityWithSuccess:(BOOL)arg0 ;


@end


#endif