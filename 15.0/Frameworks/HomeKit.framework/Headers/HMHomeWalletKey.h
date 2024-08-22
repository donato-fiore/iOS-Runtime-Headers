// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMHOMEWALLETKEY_H
#define HMHOMEWALLETKEY_H

@class NSUUID, NSArray, NSURL, NSString;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMHomeWalletKey : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) NSInteger color; // ivar: _color
@property (readonly, copy) NSURL *customURL; // ivar: _customURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isExpressEnabled) BOOL expressEnabled; // ivar: _expressEnabled
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 customURL:(id)arg1 expressEnabled:(BOOL)arg2 color:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif