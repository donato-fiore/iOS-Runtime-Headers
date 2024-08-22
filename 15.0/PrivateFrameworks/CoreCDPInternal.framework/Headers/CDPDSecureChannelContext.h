// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPDSECURECHANNELCONTEXT_H
#define CDPDSECURECHANNELCONTEXT_H

@class CDPContext;
@protocol CDPDCircleProxy, CDPKeychainCircleProxy, CDPSecureChannelProxy;

#import <Foundation/Foundation.h>


@interface CDPDSecureChannelContext : NSObject {
    CDPContext *_context;
}


@property (retain, nonatomic) NSObject<CDPDCircleProxy> *circleProxy; // ivar: _circleProxy
@property (retain, nonatomic) NSObject<CDPKeychainCircleProxy> *keychainCircleProxy; // ivar: _keychainCircleProxy
@property (retain, nonatomic) NSObject<CDPSecureChannelProxy> *secureChannelProxy; // ivar: _secureChannelProxy


-(BOOL)initialize:(*id)arg0 ;
-(id)initWithChannel:(id)arg0 dataProvider:(id)arg1 circleProxy:(id)arg2 ;
-(id)initWithContext:(id)arg0 circleProxy:(id)arg1 ;
-(void)dealloc;


@end


#endif