// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTLOCALEPAIR_H
#define _LTLOCALEPAIR_H

@class NSLocale;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _LTLocalePair : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSLocale *sourceLocale; // ivar: _sourceLocale
@property (readonly, nonatomic) NSLocale *targetLocale; // ivar: _targetLocale


+(BOOL)supportsSecureCoding;
+(id)pairWithIdentifiers:(id)arg0 ;
-(BOOL)isBidirectionalEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPassthrough;
-(BOOL)isVariantPair;
-(NSUInteger)hash;
-(id)canonicalIdentifier;
-(id)canonicalLocalePair;
-(id)combinedLocaleIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceLocale:(id)arg0 targetLocale:(id)arg1 ;
-(id)oppositeToLocale:(id)arg0 ;
-(id)reversedPair;
-(id)schemaPair;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif