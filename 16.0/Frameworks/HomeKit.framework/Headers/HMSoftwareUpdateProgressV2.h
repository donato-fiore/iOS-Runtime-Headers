// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMSOFTWAREUPDATEPROGRESSV2_H
#define HMSOFTWAREUPDATEPROGRESSV2_H

@class NSArray, NSString;
@protocol HMFObject;

#import <Foundation/Foundation.h>


@interface HMSoftwareUpdateProgressV2 : NSObject <HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat estimatedTimeRemaining; // ivar: _estimatedTimeRemaining
@property (readonly) NSUInteger hash;
@property float percentageComplete; // ivar: _percentageComplete
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPercentageComplete:(float)arg0 estimatedTimeRemaining:(CGFloat)arg1 ;


@end


#endif