// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AACUSTODIANRECOVERYCONFIGURATION_H
#define AACUSTODIANRECOVERYCONFIGURATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AACustodianRecoveryConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger codeLength; // ivar: _codeLength
@property (nonatomic) NSInteger maxSessionTime; // ivar: _maxSessionTime


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigurationDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif