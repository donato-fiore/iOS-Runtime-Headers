// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSPODCASTSIZEINFO_H
#define NMSPODCASTSIZEINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NMSPodcastSizeInfo : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) CGFloat totalDuration; // ivar: _totalDuration
@property (nonatomic) NSUInteger totalSize; // ivar: _totalSize


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)sizeDurationRatio;
-(NSUInteger)averageSize;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif