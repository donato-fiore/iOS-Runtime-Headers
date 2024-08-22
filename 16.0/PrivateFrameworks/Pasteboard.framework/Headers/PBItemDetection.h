// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBITEMDETECTION_H
#define PBITEMDETECTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PBItemDetection : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL present; // ivar: _present
@property (readonly, nonatomic) id *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)_allowedValueClasses;
+(id)detectionAbsent;
+(id)detectionPresent;
+(id)detectionPresentWithValue:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPresent:(BOOL)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif