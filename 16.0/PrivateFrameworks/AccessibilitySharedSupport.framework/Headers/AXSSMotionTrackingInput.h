// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSMOTIONTRACKINGINPUT_H
#define AXSSMOTIONTRACKINGINPUT_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AXSSMotionTrackingInput : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL isCamera;
@property (readonly, nonatomic) BOOL isHIDDevice;
@property (readonly, nonatomic) BOOL isVideoFile;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *plistDictionary;
@property (readonly, nonatomic) BOOL supportsExpressions;
@property (readonly, nonatomic) BOOL supportsLookAtPoint;
@property (readonly, nonatomic) NSUInteger trackingType;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;


+(BOOL)supportsSecureCoding;
+(id)motionTrackingInputFromPlistDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMotionTrackingInput:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlistDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif