// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFAUDIOPLAYBACKREQUEST_H
#define AFAUDIOPLAYBACKREQUEST_H

@class NSData, NSURL, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFAudioPlaybackRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat fadeInDuration; // ivar: _fadeInDuration
@property (readonly, nonatomic) CGFloat fadeOutDuration; // ivar: _fadeOutDuration
@property (readonly, copy, nonatomic) NSData *itemData; // ivar: _itemData
@property (readonly, copy, nonatomic) NSURL *itemURL; // ivar: _itemURL
@property (readonly, nonatomic) NSInteger numberOfLoops; // ivar: _numberOfLoops
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) float volume; // ivar: _volume


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemURL:(id)arg0 itemData:(id)arg1 numberOfLoops:(NSInteger)arg2 volume:(float)arg3 fadeInDuration:(CGFloat)arg4 fadeOutDuration:(CGFloat)arg5 userInfo:(id)arg6 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif