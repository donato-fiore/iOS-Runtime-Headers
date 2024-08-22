// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STINTRODUCTIONMODEL_H
#define STINTRODUCTIONMODEL_H

@class NSDateComponents, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STIntroductionModel : NSObject <NSSecureCoding>



@property (copy) NSDateComponents *downtimeEndTime; // ivar: _downtimeEndTime
@property (copy) NSDateComponents *downtimeStartTime; // ivar: _downtimeStartTime
@property (copy) NSString *passcode; // ivar: _passcode
@property (copy) NSDictionary *restrictions; // ivar: _restrictions


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDowntimeStartTime:(id)arg0 downtimeEndTime:(id)arg1 restrictions:(id)arg2 passcode:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif