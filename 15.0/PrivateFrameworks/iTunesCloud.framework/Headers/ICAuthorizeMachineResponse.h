// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICAUTHORIZEMACHINERESPONSE_H
#define ICAUTHORIZEMACHINERESPONSE_H

@class NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface ICAuthorizeMachineResponse : NSObject {
    NSDictionary *_responseDictionary;
}


@property (readonly, copy, nonatomic) NSData *keybagData;
@property (readonly, copy, nonatomic) NSData *tokenData;


-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif