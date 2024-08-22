// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCAMERAALIGNMENTDATA_H
#define ARCAMERAALIGNMENTDATA_H

@class NSString;
@protocol ARResultData, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARCameraAlignmentData : NSObject <ARResultData, NSSecureCoding>



@property (nonatomic) ? cameraTransform; // ivar: _cameraTransform
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif