// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAAPPSESSIONMANAGER_H
#define AAAPPSESSIONMANAGER_H


#import <Foundation/Foundation.h>


@interface AAAppSessionManager : NSObject {
    ? appSessionManager;
}




-(id)createSessionManager;
-(id)init;
-(id)initWithTrackingConsent:(id)arg0 ;
-(void)appSessionDidTerminate;
-(void)endAppSession:(id)arg0 ;
-(void)startAppSession;


@end


#endif