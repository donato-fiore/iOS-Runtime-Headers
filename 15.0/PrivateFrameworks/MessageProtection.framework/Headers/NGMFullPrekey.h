// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NGMFULLPREKEY_H
#define NGMFULLPREKEY_H


#import <Foundation/Foundation.h>

#import "DHKey.h"
#import "NGMPublicPreKey.h"

@interface NGMFullPrekey : NSObject

@property (readonly, nonatomic) DHKey *dhKey; // ivar: _dhKey
@property (readonly, nonatomic) NGMPublicPreKey *publicPrekey; // ivar: _publicPrekey


-(BOOL)delete;
-(id)description;
-(id)initWithPBPrekey:(id)arg0 error:(*id)arg1 ;
-(id)initWithPrekeySignedBy:(id)arg0 error:(*id)arg1 ;
-(id)pbDevicePrekey;


@end


#endif