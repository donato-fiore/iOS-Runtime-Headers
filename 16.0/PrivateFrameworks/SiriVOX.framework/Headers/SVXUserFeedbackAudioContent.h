// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXUSERFEEDBACKAUDIOCONTENT_H
#define SVXUSERFEEDBACKAUDIOCONTENT_H

@class NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SVXUserFeedbackAudioContent : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat fadeInDuration; // ivar: _fadeInDuration
@property (readonly, nonatomic) CGFloat fadeOutDuration; // ivar: _fadeOutDuration
@property (readonly, copy, nonatomic) NSURL *itemURL; // ivar: _itemURL
@property (readonly, nonatomic) NSUInteger numberOfLoops; // ivar: _numberOfLoops


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemURL:(id)arg0 numberOfLoops:(NSUInteger)arg1 fadeInDuration:(CGFloat)arg2 fadeOutDuration:(CGFloat)arg3 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif