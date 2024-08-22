// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUDIOCOMPONENTREGISTRARCLIENT_H
#define AUDIOCOMPONENTREGISTRARCLIENT_H

@protocol AudioComponentRegistrarCallbackProtocol;

#import <Foundation/Foundation.h>


@interface AudioComponentRegistrarClient : NSObject <AudioComponentRegistrarCallbackProtocol>





-(void)registrationsChanged:(id)arg0 includesExtensions:(BOOL)arg1 fsHash:(id)arg2 ;


@end


#endif