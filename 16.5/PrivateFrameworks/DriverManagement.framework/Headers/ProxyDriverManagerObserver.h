// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PROXYDRIVERMANAGEROBSERVER_H
#define PROXYDRIVERMANAGEROBSERVER_H

@protocol _SwiftDriverManagerObserver, DriverManagerObserver;

#import <Foundation/Foundation.h>


@interface ProxyDriverManagerObserver : NSObject <_SwiftDriverManagerObserver>

 {
    id<DriverManagerObserver> *_observer;
}




-(id)initWithObserver:(id)arg0 ;
-(void)approvalStateDidChange:(BOOL)arg0 ;


@end


#endif