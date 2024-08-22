// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSEPISODESIZEINFO_H
#define NMSEPISODESIZEINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NMSEpisodeSizeInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isDownloaded) BOOL downloaded; // ivar: _downloaded
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSUInteger size; // ivar: _size


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(NSUInteger)arg0 duration:(CGFloat)arg1 downloaded:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif