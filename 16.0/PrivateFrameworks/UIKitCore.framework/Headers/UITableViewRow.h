// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITABLEVIEWROW_H
#define UITABLEVIEWROW_H

@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "UITableViewCell.h"

@interface UITableViewRow : NSObject <NSCoding>

 {
    NSInteger _indentationLevel;
}


@property (retain, nonatomic) UITableViewCell *cell; // ivar: _cell
@property (nonatomic) CGFloat height; // ivar: _height


+(id)row;
-(NSInteger)indentationLevel;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setIndentationLevel:(NSInteger)arg0 ;


@end


#endif