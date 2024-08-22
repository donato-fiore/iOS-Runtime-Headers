// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDCONTEXTVALUE_H
#define _CDCONTEXTVALUE_H

@class NSDate, NSMutableDictionary;
@protocol NSCopying, NSSecureCoding, NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSMutableDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSObject<NSCopying><NSSecureCoding> *value;


+(BOOL)supportsSecureCoding;
+(id)supportedContextValueClasses;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif