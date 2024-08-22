// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHPERSISTENTCHANGETOKEN_H
#define PHPERSISTENTCHANGETOKEN_H

@class NSPersistentHistoryToken;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHPersistentChangeToken : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSPersistentHistoryToken *persistentHistoryToken; // ivar: _persistentHistoryToken
@property (readonly, nonatomic) int version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)currentTokenForContext:(id)arg0 ;
+(id)tokenWithPersistentHistoryToken:(id)arg0 ;
+(int)currentVersion;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPersistentChangeToken:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistentHistoryToken:(id)arg0 ;
-(id)initWithPersistentHistoryToken:(id)arg0 version:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif