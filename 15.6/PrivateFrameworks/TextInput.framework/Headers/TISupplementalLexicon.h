// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TISUPPLEMENTALLEXICON_H
#define TISUPPLEMENTALLEXICON_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TISupplementalLexicon : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) NSUInteger searchPrefixes; // ivar: _searchPrefixes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSupplementalLexicon:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 searchPrefixes:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif