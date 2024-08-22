// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEINFOROW_H
#define MKPLACEINFOROW_H


#import <Foundation/Foundation.h>

#import "MKPlaceSectionRowView.h"

@interface MKPlaceInfoRow : NSObject

@property (nonatomic) BOOL enable; // ivar: _enable
@property (readonly, nonatomic) MKPlaceSectionRowView *rowView; // ivar: _rowView
@property (nonatomic) BOOL showIcon; // ivar: _showIcon
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)infoRow:(id)arg0 ofType:(NSUInteger)arg1 ;


@end


#endif