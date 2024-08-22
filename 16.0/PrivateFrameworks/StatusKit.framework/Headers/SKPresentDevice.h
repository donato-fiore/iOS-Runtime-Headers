// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPRESENTDEVICE_H
#define SKPRESENTDEVICE_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SKHandle.h"

@interface SKPresentDevice : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) SKHandle *handle; // ivar: _handle
@property (readonly, nonatomic) BOOL isSelfDevice; // ivar: _isSelfDevice
@property (readonly, nonatomic) BOOL isSelfHandle; // ivar: _isSelfHandle
@property (readonly, nonatomic) NSDate *publishTime; // ivar: _publishTime


+(BOOL)supportsSecureCoding;
+(id)logger;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandle:(id)arg0 deviceIdentifier:(id)arg1 publishTime:(id)arg2 selfHandle:(BOOL)arg3 selfDevice:(BOOL)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif