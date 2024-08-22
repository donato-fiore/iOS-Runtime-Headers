// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHTOKENIZEDTEXTRESULTCOLUMN_H
#define CHTOKENIZEDTEXTRESULTCOLUMN_H

@class NSIndexSet, NSArray;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHTokenizedTextResultColumn : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSIndexSet *strokeIndexes;
@property (readonly, copy, nonatomic) NSArray *tokenRows; // ivar: _tokenRows


+(BOOL)supportsSecureCoding;
-(BOOL)containsStartingTokenEquivalentToToken:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTokenizedTextResultColumn:(id)arg0 ;
-(NSInteger)indexOfEquivalentTokenRow:(id)arg0 tokenRange:(struct _NSRange )arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTokenRows:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif