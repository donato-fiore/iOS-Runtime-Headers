// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUMODELTILETRANSFORM_H
#define PUMODELTILETRANSFORM_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PUModelTileTransform : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL hasUserInput; // ivar: _hasUserInput
@property (readonly, nonatomic) BOOL hasUserZoomedIn;
@property (readonly, nonatomic) BOOL hasUserZoomedOut;
@property (readonly, nonatomic) CGPoint normalizedTranslation; // ivar: _normalizedTranslation
@property (readonly, nonatomic) CGPoint overscroll; // ivar: _overscroll
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, copy, nonatomic) NSString *userInputOriginIdentifier; // ivar: _userInputOriginIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithNoUserInput;
-(id)initWithNormalizedTranslation:(struct CGPoint )arg0 overscroll:(struct CGPoint )arg1 scale:(CGFloat)arg2 userInputOriginIdentifier:(id)arg3 ;


@end


#endif