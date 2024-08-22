// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCOLLECTIONLAYOUTGROUPCUSTOMITEM_H
#define NSCOLLECTIONLAYOUTGROUPCUSTOMITEM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSCollectionLayoutGroupCustomItem : NSObject <NSCopying>



@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (readonly, nonatomic) NSInteger zIndex; // ivar: _zIndex


+(id)customItemWithFrame:(struct CGRect )arg0 ;
+(id)customItemWithFrame:(struct CGRect )arg0 zIndex:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 zIndex:(NSInteger)arg1 ;


@end


#endif