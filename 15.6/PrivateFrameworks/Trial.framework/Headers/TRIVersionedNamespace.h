// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIVERSIONEDNAMESPACE_H
#define TRIVERSIONEDNAMESPACE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIVersionedNamespace : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) unsigned int compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)versionedNamespaceWithName:(id)arg0 compatibilityVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToVersionedNamespace:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementCompatibilityVersion:(unsigned int)arg0 ;
-(id)copyWithReplacementName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 compatibilityVersion:(unsigned int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif