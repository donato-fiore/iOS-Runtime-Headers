// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11SESSIONCOREP33_4814961BBE8B6C5259F9355EADCF0B6721ALERTAPPSERVICECLIENT_H
#define _TTC11SESSIONCOREP33_4814961BBE8B6C5259F9355EADCF0B6721ALERTAPPSERVICECLIENT_H

@protocol ACAlertAppXPCServer;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCoreP33_4814961BBE8B6C5259F9355EADCF0B6721AlertAppServiceClient : NSObject <ACAlertAppXPCServer>

 {
    ? connection;
    ? delegate;
}




-(id)init;
-(void)didPresentAlertWithIdentifier:(id)arg0 ;


@end


#endif