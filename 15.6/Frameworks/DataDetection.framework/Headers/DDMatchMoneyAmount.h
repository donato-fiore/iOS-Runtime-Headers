// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDMATCHMONEYAMOUNT_H
#define DDMATCHMONEYAMOUNT_H

@class NSString;


#import "DDMatch.h"

@interface DDMatchMoneyAmount : DDMatch

@property (readonly, nonatomic) CGFloat amount; // ivar: _amount
@property (readonly, nonatomic) NSString *currency; // ivar: _currency


-(id)initWithDDScannerResult:(id)arg0 ;


@end


#endif