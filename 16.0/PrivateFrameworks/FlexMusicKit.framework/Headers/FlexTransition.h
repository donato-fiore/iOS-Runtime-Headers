// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLEXTRANSITION_H
#define FLEXTRANSITION_H

@class NSString;
@protocol NSCopying, NSDictionaryCoding;

#import <Foundation/Foundation.h>


@interface FlexTransition : NSObject <NSCopying, NSDictionaryCoding>



@property (readonly, nonatomic) NSInteger fadeIn; // ivar: _fadeIn
@property (readonly, nonatomic) NSInteger fadeOut; // ivar: _fadeOut
@property (readonly, nonatomic) BOOL prevented; // ivar: _prevented
@property (readonly, copy, nonatomic) NSString *transitionSegmentName; // ivar: _transitionSegmentName
@property (readonly, nonatomic) BOOL useNextSegmentForFadeOut; // ivar: _useNextSegmentForFadeOut


+(NSInteger)validFadeLengthForLength:(NSInteger)arg0 ;
-(BOOL)isDefaultTransition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsDictionary;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTransitionSegmentNamed:(id)arg0 prevented:(BOOL)arg1 fadeOut:(NSInteger)arg2 fadeIn:(NSInteger)arg3 useNextSegmentForFadeOut:(BOOL)arg4 ;


@end


#endif