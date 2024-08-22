// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDDEVICE_H
#define _CDDEVICE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDDevice : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isCompanion) BOOL companion; // ivar: _companion
@property (nonatomic) NSInteger deviceClass; // ivar: _deviceClass
@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(NSUInteger)identifierForDeviceID:(id)arg0 ;
+(id)localDevice;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesDeviceTypes:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 deviceID:(id)arg1 deviceClass:(NSInteger)arg2 model:(id)arg3 companion:(BOOL)arg4 ;
-(id)initWithName:(id)arg0 deviceID:(id)arg1 model:(id)arg2 companion:(BOOL)arg3 ;
-(id)initWithName:(id)arg0 identifier:(NSUInteger)arg1 deviceClass:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif