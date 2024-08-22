// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDRANKERRESULT_H
#define GDRANKERRESULT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GDSpan.h"

@interface GDRankerResult : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *rankedItems; // ivar: _rankedItems
@property (readonly, copy, nonatomic) GDSpan *span; // ivar: _span


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpan:(id)arg0 rankedItems:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif