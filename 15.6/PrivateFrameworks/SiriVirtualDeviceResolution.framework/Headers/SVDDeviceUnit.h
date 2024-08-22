// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SVDDEVICEUNIT_H
#define SVDDEVICEUNIT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SVDDeviceUnitSwift.h"

@interface SVDDeviceUnit : NSObject <NSSecureCoding, NSCopying>

 {
    SVDDeviceUnitSwift *_backing;
}


@property (readonly, nonatomic) NSString *assistantId;
@property (readonly, nonatomic) NSString *homeKitAccessoryIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isCommunalDevice;
@property (readonly, nonatomic) NSString *mediaRouteIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger proximity;
@property (readonly, nonatomic) NSString *roomName;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceUnit:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 assistantId:(id)arg1 builder:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 assistantId:(id)arg1 name:(id)arg2 roomName:(id)arg3 proximity:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif