// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSINACTIVITYPREDICTORBACKUPHOURENTRY_H
#define _OSINACTIVITYPREDICTORBACKUPHOURENTRY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _OSInactivityPredictorBackupHourEntry : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat averageDuration; // ivar: _averageDuration
@property (nonatomic) CGFloat stdDev; // ivar: _stdDev


+(BOOL)supportsSecureCoding;
+(id)descriptionWithHistoryEntries:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif