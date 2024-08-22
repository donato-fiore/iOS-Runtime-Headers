// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRDEVICE_H
#define SRDEVICE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SRDevice : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_internalProductType;
}


@property (copy) NSString *buildVersion; // ivar: _buildVersion
@property (copy) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, copy) NSString *model; // ivar: _model
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSString *systemName; // ivar: _systemName
@property (readonly, copy) NSString *systemVersion; // ivar: _systemVersion


+(BOOL)supportsSecureCoding;
+(id)currentDevice;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_productType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceDetails:(id)arg0 ;
-(id)sr_dictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif