// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVEXTERNALDEVICESCREENBORROWTOKEN_H
#define AVEXTERNALDEVICESCREENBORROWTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVExternalDevice.h"

@interface AVExternalDeviceScreenBorrowToken : NSObject {
    AVExternalDevice *_externalDevice;
}


@property (readonly, nonatomic) NSString *client; // ivar: _client
@property (readonly, nonatomic) NSString *reason; // ivar: _reason


-(id)init;
-(id)initWithExternalDevice:(id)arg0 client:(id)arg1 reason:(id)arg2 ;
-(void)dealloc;


@end


#endif