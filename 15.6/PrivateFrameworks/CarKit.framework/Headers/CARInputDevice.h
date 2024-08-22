// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARINPUTDEVICE_H
#define CARINPUTDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CARInputDevice : NSObject

@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, nonatomic) NSUInteger senderID; // ivar: _senderID


-(id)initWithServiceClient:(struct __IOHIDServiceClient *)arg0 UUID:(id)arg1 ;


@end


#endif