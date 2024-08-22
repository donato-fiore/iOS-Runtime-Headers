// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FUDPERSONALIZATIONOBJECTINFO_H
#define FUDPERSONALIZATIONOBJECTINFO_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FudPersonalizationObjectInfo : NSObject <NSSecureCoding>

 {
    BOOL _esecSet;
    BOOL _eproSet;
    BOOL _trustedSet;
}


@property (retain, nonatomic) NSData *digest; // ivar: _digest
@property (nonatomic) BOOL effectiveProductionMode; // ivar: _effectiveProductionMode
@property (nonatomic) BOOL effectiveSecurityMode; // ivar: _effectiveSecurityMode
@property (readonly, copy, nonatomic) NSString *objectTag; // ivar: _objectTag
@property (nonatomic) BOOL trusted; // ivar: _trusted


+(BOOL)supportsSecureCoding;
-(BOOL)isEffectiveProductionModeSet;
-(BOOL)isEffectiveSecurityModeSet;
-(BOOL)isTrustedSet;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTag:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif