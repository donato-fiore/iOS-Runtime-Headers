// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKMULTIPARTLABELCACHEKEY_H
#define _MKMULTIPARTLABELCACHEKEY_H

@class NSAttributedString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _MKMultiPartLabelCacheKey : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAttributedString:(id)arg0 size:(struct CGSize )arg1 ;


@end


#endif