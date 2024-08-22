// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKDEVICEGESTALT_H
#define CRKDEVICEGESTALT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKDeviceGestalt : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger platform; // ivar: _platform
@property (readonly, copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithPlatform:(NSUInteger)arg0 systemVersion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif