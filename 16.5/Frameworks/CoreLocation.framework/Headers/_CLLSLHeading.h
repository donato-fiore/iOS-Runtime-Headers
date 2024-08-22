// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CLLSLHEADING_H
#define _CLLSLHEADING_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_CLLSLLocation.h"
#import "_CLLSLHeadingSupplInfo.h"

@interface _CLLSLHeading : NSObject <NSCopying, NSSecureCoding>

 {
    ? _rotationalAccuracyInRadians;
}


@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (nonatomic) NSUInteger globalReferenceFrame; // ivar: _globalReferenceFrame
@property (copy, nonatomic) _CLLSLLocation *location; // ivar: _location
@property (nonatomic) ? rotationFromGlobalToCameraFrame; // ivar: _rotationFromGlobalToCameraFrame
@property (nonatomic) ? rotationFromGlobalToDeviceFrame; // ivar: _rotationFromGlobalToDeviceFrame
@property ? rotationalAccuracyInRadians;
@property (copy, nonatomic) _CLLSLHeadingSupplInfo *supplemantaryInfo; // ivar: _supplemantaryInfo
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithMemberIndent:(id)arg0 endIndent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif