// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DATEFORMATTINGCONTEXT_H
#define DATEFORMATTINGCONTEXT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface DateFormattingContext : NSObject

@property (readonly, nonatomic) BOOL isLuminanceReduced; // ivar: _isLuminanceReduced
@property (readonly, nonatomic) NSDate *referenceDate; // ivar: _referenceDate


-(id)init;
-(id)initWithReferenceDate:(id)arg0 isLuminanceReduced:(BOOL)arg1 ;


@end


#endif