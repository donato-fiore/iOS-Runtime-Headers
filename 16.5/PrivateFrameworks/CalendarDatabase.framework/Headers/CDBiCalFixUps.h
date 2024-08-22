// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDBICALFIXUPS_H
#define CDBICALFIXUPS_H


#import <Foundation/Foundation.h>


@interface CDBiCalFixUps : NSObject



+(BOOL)_fixEndDateForEvent:(id)arg0 withOriginalEvent:(id)arg1 detachments:(id)arg2 ;
+(BOOL)fixEndDates:(id)arg0 ;
+(CGFloat)_durationForEvent:(id)arg0 ;


@end


#endif