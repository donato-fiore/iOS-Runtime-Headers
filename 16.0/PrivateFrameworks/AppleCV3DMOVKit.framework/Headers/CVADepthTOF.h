// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVADEPTHTOF_H
#define CVADEPTHTOF_H

@class NSDictionary, ADJasperPointCloud;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVADepthTOF : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (nonatomic) NSUInteger frameId; // ivar: _frameId
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) ADJasperPointCloud *pointCloud; // ivar: _pointCloud
@property (nonatomic) NSInteger projectorMode; // ivar: _projectorMode
@property (nonatomic) NSUInteger syncTimestamp; // ivar: _syncTimestamp
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)initWithADJasperPointCloud:(id)arg0 timestamp:(CGFloat)arg1 ;
-(id)initWithAVPointCloudData:(id)arg0 timestamp:(CGFloat)arg1 ;
-(id)initWithCVDataBufferRef:(struct __CVBuffer *)arg0 timestamp:(CGFloat)arg1 projectorMode:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJasperDepth:(id)arg0 timestamp:(CGFloat)arg1 projectorMode:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reset;


@end


#endif