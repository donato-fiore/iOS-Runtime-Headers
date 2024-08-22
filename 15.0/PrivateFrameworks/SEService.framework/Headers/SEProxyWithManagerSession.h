// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEPROXYWITHMANAGERSESSION_H
#define SEPROXYWITHMANAGERSESSION_H

@class NFSecureElementManagerSession, NSString;
@protocol SEProxyInterface;

#import <Foundation/Foundation.h>


@interface SEProxyWithManagerSession : NSObject <SEProxyInterface>

 {
    NFSecureElementManagerSession *_session;
    NSString *_seid;
}




-(void)transceive:(id)arg0 callback:(id)arg1 ;


@end


#endif