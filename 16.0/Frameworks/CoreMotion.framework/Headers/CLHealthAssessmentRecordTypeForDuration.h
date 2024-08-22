// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLHEALTHASSESSMENTRECORDTYPEFORDURATION_H
#define CLHEALTHASSESSMENTRECORDTYPEFORDURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLHealthAssessmentRecordTypeForDuration : NSObject <NSSecureCoding>



@property int dataType; // ivar: _dataType
@property CGFloat duration; // ivar: _duration


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif