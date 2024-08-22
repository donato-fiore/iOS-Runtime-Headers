// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDTRIGGERPOLICY_H
#define HMDTRIGGERPOLICY_H

@class HMFObject, NSUUID;
@protocol NSSecureCoding;



@interface HMDTriggerPolicy : HMFObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)applyPolicy:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif