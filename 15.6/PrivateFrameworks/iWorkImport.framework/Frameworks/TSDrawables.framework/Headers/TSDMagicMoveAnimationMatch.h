// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMAGICMOVEANIMATIONMATCH_H
#define TSDMAGICMOVEANIMATIONMATCH_H

@class NSLock, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TSDTextureSet.h"

@interface TSDMagicMoveAnimationMatch : NSObject <NSSecureCoding>

 {
    TSDTextureSet *_morphTexture;
    TSDTextureSet *_morphQueuedTexture;
    TSDTextureSet *_morphQueuedForDeletionTexture;
    NSLock *_morphTextureUpdateLock;
    BOOL _isUsingMorphTexture;
    BOOL _didUseMorphTexture;
    BOOL _hasBeenTornDown;
}


@property (retain, nonatomic) TSDTextureSet *incomingTexture; // ivar: _incomingTexture
@property (readonly, nonatomic) BOOL isMatched;
@property (nonatomic) BOOL isMorphMatch; // ivar: _isMorphMatch
@property (nonatomic) BOOL isTextStyleIdenticalExceptSize; // ivar: _isTextStyleIdenticalExceptSize
@property (nonatomic) NSInteger matchType; // ivar: _matchType
@property (retain, nonatomic) TSDTextureSet *outgoingTexture; // ivar: _outgoingTexture
@property (retain, nonatomic) NSDictionary *outgoingTextureActionBuildFinalAttributes; // ivar: _outgoingTextureActionBuildFinalAttributes
@property (nonatomic) BOOL shouldDisableTextMorphing; // ivar: _shouldDisableTextMorphing
@property (nonatomic) BOOL shouldTearDownTextures; // ivar: _shouldTearDownTextures


+(BOOL)supportsSecureCoding;
+(NSUInteger)magicMoveMorphTexturesPerSecond;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMatchType:(NSInteger)arg0 outgoingTexture:(id)arg1 incomingTexture:(id)arg2 ;
-(id)lockCurrentMorphTexture;
-(void)addMorphTexture:(id)arg0 ;
-(void)clearMorphTexture;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)teardown;
-(void)unlockCurrentMorphTexture;


@end


#endif