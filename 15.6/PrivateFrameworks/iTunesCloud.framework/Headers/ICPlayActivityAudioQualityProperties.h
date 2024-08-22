// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPLAYACTIVITYAUDIOQUALITYPROPERTIES_H
#define ICPLAYACTIVITYAUDIOQUALITYPROPERTIES_H

@class NSString;
@protocol NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICPlayActivityAudioQualityProperties : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger bitDepth; // ivar: _bitDepth
@property (readonly, nonatomic) NSInteger bitRate; // ivar: _bitRate
@property (readonly, nonatomic) NSString *channelLayoutDescription; // ivar: _channelLayoutDescription
@property (readonly, nonatomic) unsigned int codec; // ivar: _codec
@property (readonly, nonatomic) NSString *codecString;
@property (readonly, nonatomic) NSInteger sampleRate; // ivar: _sampleRate
@property (readonly, nonatomic, getter=isSpatialized) BOOL spatialized; // ivar: _spatialized


+(BOOL)supportsSecureCoding;
-(id)_copyWithClass:(Class)arg0 zone:(struct _NSZone *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif