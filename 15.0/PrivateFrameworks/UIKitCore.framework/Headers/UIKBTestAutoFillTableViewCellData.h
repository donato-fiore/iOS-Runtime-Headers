// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBTESTAUTOFILLTABLEVIEWCELLDATA_H
#define UIKBTESTAUTOFILLTABLEVIEWCELLDATA_H

@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "UITableViewCell.h"

@interface UIKBTestAutoFillTableViewCellData : NSObject <NSCoding>



@property (readonly, nonatomic) UITableViewCell *cell; // ivar: _cell
@property (readonly, nonatomic) CGFloat height; // ivar: _height


-(id)initWithCell:(id)arg0 height:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif