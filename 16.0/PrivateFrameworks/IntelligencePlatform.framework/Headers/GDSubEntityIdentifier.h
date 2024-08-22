// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDSUBENTITYIDENTIFIER_H
#define GDSUBENTITYIDENTIFIER_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface GDSubEntityIdentifier : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger entityClass;
@property (readonly, nonatomic) NSUInteger intValue; // ivar: _intValue
@property (readonly, nonatomic) NSString *stringValue; // ivar: _stringValue


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithValue:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif