// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDMICROLOCATIONVISITEVENT_H
#define GDMICROLOCATIONVISITEVENT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface GDMicroLocationVisitEvent : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) BOOL isEnter; // ivar: _isEnter
@property (readonly, nonatomic) NSString *microLocationIdentifier; // ivar: _microLocationIdentifier
@property (readonly, nonatomic) CGFloat probability; // ivar: _probability


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDate:(id)arg0 microLocationIdentifier:(id)arg1 probability:(CGFloat)arg2 isEnter:(BOOL)arg3 ;


@end


#endif