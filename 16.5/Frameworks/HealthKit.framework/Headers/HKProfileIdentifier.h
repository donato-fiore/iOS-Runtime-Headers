// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKPROFILEIDENTIFIER_H
#define HKPROFILEIDENTIFIER_H

@class NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKProfileIdentifier : NSObject <NSSecureCoding, NSCopying>

 {
    NSUUID *_identifier;
    NSInteger _type;
}


@property (readonly, copy) NSUUID *identifier;
@property (readonly) NSInteger type;


+(BOOL)isValidProfileType:(NSInteger)arg0 ;
+(BOOL)isValidSecondaryProfileType:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_profileWithUUID:(id)arg0 type:(NSInteger)arg1 ;
+(id)primaryProfile;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif