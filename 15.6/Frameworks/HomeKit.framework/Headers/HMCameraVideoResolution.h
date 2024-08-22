// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCAMERAVIDEORESOLUTION_H
#define HMCAMERAVIDEORESOLUTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCameraVideoResolution : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger videoResolution; // ivar: _videoResolution


+(BOOL)isValid:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideoResolutionType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif