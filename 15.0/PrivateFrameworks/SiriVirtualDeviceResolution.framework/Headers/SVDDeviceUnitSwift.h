// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SVDDEVICEUNITSWIFT_H
#define SVDDEVICEUNITSWIFT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SVDDeviceUnitSwift : NSObject <NSSecureCoding>

 {
    ? identifier;
    ? assistantId;
    ? name;
    ? roomName;
    ? mediaRouteIdentifier;
    ? homeKitAccessoryIdentifier;
}


@property (nonatomic, readonly) NSString *assistantId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *homeKitAccessoryIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BOOL isCommunalDevice; // ivar: isCommunalDevice
@property (nonatomic, readonly) NSString *mediaRouteIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSInteger proximity; // ivar: proximity
@property (nonatomic, readonly) NSString *roomName;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 assistantId:(id)arg1 builder:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif