// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UVHARDWAREEVENT_H
#define UVHARDWAREEVENT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface UVHardwareEvent : NSObject

@property (readonly, nonatomic) NSData *data;


-(id)initWithData:(id)arg0 error:(*id)arg1 ;


@end


#endif