// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UMLIBINFOPROVIDER_H
#define UMLIBINFOPROVIDER_H

@class NSString;
@protocol UMLibInfoProviding;

#import <Foundation/Foundation.h>


@interface UMLibInfoProvider : NSObject <UMLibInfoProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)passwdForUID:(unsigned int)arg0 error:(*id)arg1 ;


@end


#endif