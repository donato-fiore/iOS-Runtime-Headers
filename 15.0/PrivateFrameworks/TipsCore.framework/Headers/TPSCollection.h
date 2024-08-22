// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCOLLECTION_H
#define TPSCOLLECTION_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;


#import "TPSDocument.h"
#import "TPSAssets.h"
#import "TPSContent.h"
#import "TPSTileContent.h"

@interface TPSCollection : TPSDocument <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL containsIntroTip; // ivar: _containsIntroTip
@property (copy, nonatomic) NSString *countText; // ivar: _countText
@property (readonly, copy, nonatomic) TPSAssets *featuredAssets;
@property (copy, nonatomic) TPSContent *featuredContent; // ivar: _featuredContent
@property (readonly, copy, nonatomic) NSString *featuredText;
@property (readonly, copy, nonatomic) NSString *featuredTitle;
@property (readonly, nonatomic) NSInteger priority;
@property (copy, nonatomic) NSString *shortTitle; // ivar: _shortTitle
@property (copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) TPSAssets *tileAssets;
@property (copy, nonatomic) TPSTileContent *tileContent; // ivar: _tileContent
@property (copy, nonatomic) NSArray *tipIdentifiers; // ivar: _tipIdentifiers
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isTopFeatured) BOOL topFeatured; // ivar: _topFeatured


+(BOOL)supportsSecureCoding;
+(id)collectionIdentifierForDictionary:(id)arg0 ;
+(id)na_identity;
+(id)tipIdentifiersForDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 metadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithContentDictionary:(id)arg0 metadata:(id)arg1 ;


@end


#endif