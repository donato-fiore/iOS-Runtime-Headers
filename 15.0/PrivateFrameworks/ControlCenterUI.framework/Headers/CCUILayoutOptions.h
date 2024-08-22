// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUILAYOUTOPTIONS_H
#define CCUILAYOUTOPTIONS_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CCUILayoutOptions : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) CGFloat itemEdgeSize; // ivar: _itemEdgeSize
@property (readonly, nonatomic) CGFloat itemSpacing; // ivar: _itemSpacing


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithLayoutOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif