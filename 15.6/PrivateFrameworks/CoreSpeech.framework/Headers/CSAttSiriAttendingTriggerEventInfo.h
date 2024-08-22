// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSATTSIRIATTENDINGTRIGGEREVENTINFO_H
#define CSATTSIRIATTENDINGTRIGGEREVENTINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CSAttSiriRequestContext.h"

@interface CSAttSiriAttendingTriggerEventInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) CSAttSiriRequestContext *ctx; // ivar: _ctx
@property (retain, nonatomic) NSString *detectedToken; // ivar: _detectedToken
@property (nonatomic) NSUInteger triggerAbsStartSampleId; // ivar: _triggerAbsStartSampleId
@property (nonatomic) NSUInteger triggerMachTime; // ivar: _triggerMachTime


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif