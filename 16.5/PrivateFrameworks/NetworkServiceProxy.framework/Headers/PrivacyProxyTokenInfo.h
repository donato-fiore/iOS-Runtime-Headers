// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRIVACYPROXYTOKENINFO_H
#define PRIVACYPROXYTOKENINFO_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PrivacyProxyTokenInfo : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger agentLowWaterMark; // ivar: _agentLowWaterMark
@property (nonatomic) NSUInteger agentTokens; // ivar: _agentTokens
@property (nonatomic) NSUInteger cacheLowWaterMark; // ivar: _cacheLowWaterMark
@property (nonatomic) NSUInteger cachedTokens; // ivar: _cachedTokens


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif