// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKSESSIONSTATE_H
#define _WKSESSIONSTATE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _WKSessionState : NSObject {
    SessionState _sessionState;
}


@property (readonly, copy, nonatomic) NSData *data;


-(id)_initWithSessionState:(struct SessionState )arg0 ;
-(id)initWithData:(id)arg0 ;


@end


#endif