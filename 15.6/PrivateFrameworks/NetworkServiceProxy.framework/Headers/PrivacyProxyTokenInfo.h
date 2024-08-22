// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)diagnostics;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif