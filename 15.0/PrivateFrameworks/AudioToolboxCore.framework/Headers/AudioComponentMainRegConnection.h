// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUDIOCOMPONENTMAINREGCONNECTION_H
#define AUDIOCOMPONENTMAINREGCONNECTION_H

@protocol AudioComponentRegistrarProtocol;

#import <Foundation/Foundation.h>


@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol>

 {
    *void mImpl;
    ConnectionInfo mConnInfo;
}




-(id)initWithRegistrar:(*void)arg0 connection:(id)arg1 ;
-(void)canRegisterComponent:(id)arg0 reply:(id)arg1 ;
-(void)getComponentList:(id)arg0 linkedSDKRequiresEntitlement:(BOOL)arg1 includeExtensions:(BOOL)arg2 reply:(id)arg3 ;


@end


#endif