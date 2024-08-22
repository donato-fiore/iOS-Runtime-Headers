// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFRAMEWORKFINGERPRINT_H
#define CKFRAMEWORKFINGERPRINT_H

@class NSNumber, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKFrameworkFingerprint : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSNumber *cpuSubtype; // ivar: _cpuSubtype
@property (copy, nonatomic) NSNumber *cpuType; // ivar: _cpuType
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (copy, nonatomic) NSNumber *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isLikelyEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif