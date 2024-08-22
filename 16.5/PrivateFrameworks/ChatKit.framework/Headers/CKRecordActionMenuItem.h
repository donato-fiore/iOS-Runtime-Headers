// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKRECORDACTIONMENUITEM_H
#define CKRECORDACTIONMENUITEM_H

@class NSDate;


#import "CKActionMenuItem.h"

@interface CKRecordActionMenuItem : CKActionMenuItem

@property (retain, nonatomic) NSDate *dateSelected; // ivar: _dateSelected
@property (nonatomic) BOOL wasSelected; // ivar: _wasSelected


-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateForState:(NSInteger)arg0 touchInside:(BOOL)arg1 ;


@end


#endif