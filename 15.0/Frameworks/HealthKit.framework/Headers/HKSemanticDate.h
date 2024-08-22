// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSEMANTICDATE_H
#define HKSEMANTICDATE_H

@class NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKSemanticDate : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath


+(BOOL)supportsSecureCoding;
+(id)semanticDateWithKeyPath:(id)arg0 date:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 date:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif