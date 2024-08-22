// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLKEY_H
#define MLKEY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLKey : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *scope; // ivar: _scope


+(BOOL)supportsSecureCoding;
-(BOOL)hasGlobalScope;
-(BOOL)hasSameNameAsKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deletingPrefixingScope:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyName:(id)arg0 ;
-(id)initWithKeyName:(id)arg0 scope:(id)arg1 ;
-(id)scopedTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif