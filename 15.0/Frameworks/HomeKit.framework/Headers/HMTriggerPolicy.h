// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMTRIGGERPOLICY_H
#define HMTRIGGERPOLICY_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMTriggerPolicy : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)_initWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif