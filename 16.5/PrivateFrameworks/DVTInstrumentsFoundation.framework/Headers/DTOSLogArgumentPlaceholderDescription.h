// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTOSLOGARGUMENTPLACEHOLDERDESCRIPTION_H
#define DTOSLOGARGUMENTPLACEHOLDERDESCRIPTION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DTOSLogArgumentPlaceholderDescription : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *placeholderKey; // ivar: _placeholderKey
@property (readonly, nonatomic) NSInteger placeholderKind; // ivar: _placeholderKind
@property (readonly, nonatomic) NSString *placeholderObjectValue; // ivar: _placeholderObjectValue
@property (readonly, nonatomic) NSString *placeholderToken; // ivar: _placeholderToken


-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPlaceholderToken:(id)arg0 ;


@end


#endif