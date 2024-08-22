// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HSMESSAGE_H
#define HSMESSAGE_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HSMessage : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *deviceEnvironment; // ivar: _deviceEnvironment
@property (retain, nonatomic) NSString *hostEnvironment; // ivar: _hostEnvironment
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)supportedClasses;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif