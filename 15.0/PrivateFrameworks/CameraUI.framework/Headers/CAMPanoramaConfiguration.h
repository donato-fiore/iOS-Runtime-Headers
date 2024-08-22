// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMPANORAMACONFIGURATION_H
#define CAMPANORAMACONFIGURATION_H

@class NSDictionary;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface CAMPanoramaConfiguration : NSObject <NSCoding>



@property (retain, nonatomic) NSDictionary *_maxWidthPerDevice; // ivar: __maxWidthPerDevice
@property (readonly, nonatomic) NSInteger maxWidth; // ivar: _maxWidth
@property (readonly, nonatomic) ? maximumFramerate; // ivar: _maximumFramerate
@property (readonly, nonatomic) ? minimumFramerate; // ivar: _minimumFramerate
@property (readonly, nonatomic) int ringBufferSize; // ivar: _ringBufferSize
@property (readonly, nonatomic) NSInteger sampleBufferHeight; // ivar: _sampleBufferHeight
@property (readonly, nonatomic) NSInteger sampleBufferWidth; // ivar: _sampleBufferWidth


+(id)sharedInstance;
-(NSInteger)maxWidthForDevice:(NSInteger)arg0 ;
-(id)initWithACTConfiguration:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif