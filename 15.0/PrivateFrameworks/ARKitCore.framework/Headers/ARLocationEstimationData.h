// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARLOCATIONESTIMATIONDATA_H
#define ARLOCATIONESTIMATIONDATA_H

@class NSString, CLLocation;
@protocol ARResultData, ARDaemonSecureCoding;

#import <Foundation/Foundation.h>


@interface ARLocationEstimationData : NSObject <ARResultData, ARDaemonSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat heading; // ivar: _heading
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinates:(struct CLLocationCoordinate2D )arg0 altitude:(CGFloat)arg1 heading:(CGFloat)arg2 ;
-(id)initWithLocation:(id)arg0 heading:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif