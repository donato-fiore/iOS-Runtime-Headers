// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSBOOKWIDGETREADINGHISTORYDATA_H
#define BDSBOOKWIDGETREADINGHISTORYDATA_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "BDSReadingHistoryStateInfo.h"

@interface BDSBookWidgetReadingHistoryData : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL readingGoalsEnabled; // ivar: _readingGoalsEnabled
@property (retain, nonatomic) BDSReadingHistoryStateInfo *stateInfo; // ivar: _stateInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStateInfo:(id)arg0 readingGoalsEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif