// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCARRIERSPACEUSAGEPLANITEMVOICE_H
#define CTCARRIERSPACEUSAGEPLANITEMVOICE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCarrierSpaceUsagePlanItemVoice : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *minutesCapacity; // ivar: _minutesCapacity
@property (retain, nonatomic) NSString *minutesUsed; // ivar: _minutesUsed


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif