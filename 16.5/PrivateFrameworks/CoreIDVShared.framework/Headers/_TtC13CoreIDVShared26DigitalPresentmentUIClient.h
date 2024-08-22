// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13COREIDVSHARED26DIGITALPRESENTMENTUICLIENT_H
#define _TTC13COREIDVSHARED26DIGITALPRESENTMENTUICLIENT_H

@protocol _TtP13CoreIDVShared28DigitalPresentmentUIProtocol_;

#import <Foundation/Foundation.h>


@interface _TtC13CoreIDVShared26DigitalPresentmentUIClient : NSObject <_TtP13CoreIDVShared28DigitalPresentmentUIProtocol_>

 {
    ? serverConnection;
    ? remoteObjectProxy;
}




-(id)init;
-(void)prepareForDisplayWithCompletion:(id)arg0 ;
-(void)userCancelledWithCompletion:(id)arg0 ;


@end


#endif