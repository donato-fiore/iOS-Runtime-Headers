// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTILINGSCROLLINFO_H
#define PXTILINGSCROLLINFO_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXTilingScrollInfo : NSObject <NSCopying>



@property (nonatomic) NSUInteger axis; // ivar: _axis
@property (nonatomic) CGSize interpageSpacing; // ivar: _interpageSpacing
@property (nonatomic, getter=isPagingEnabled) BOOL pagingEnabled; // ivar: _pagingEnabled
@property (nonatomic) CGPoint pagingOrigin; // ivar: _pagingOrigin


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif