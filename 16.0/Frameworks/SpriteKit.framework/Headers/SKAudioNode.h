// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKAUDIONODE_H
#define SKAUDIONODE_H

@class AVAudioNode;
@protocol NSSecureCoding;


#import "SKNode.h"

@interface SKAudioNode : SKNode <NSSecureCoding>

 {
    *void _skcAudioNode;
}


@property (nonatomic) BOOL autoplayLooped; // ivar: _autoplayLooped
@property (retain, nonatomic) AVAudioNode *avAudioNode;
@property (nonatomic, getter=isPositional) BOOL positional; // ivar: _positional


+(BOOL)supportsSecureCoding;
+(id)_audioURLWithName:(id)arg0 bundle:(id)arg1 ;
-(*void)_makeBackingNode;
-(BOOL)isEqualToNode:(id)arg0 ;
-(id)audioFile;
-(id)audioFileName;
-(id)audioURL;
-(id)init;
-(id)initWithAVAudioNode:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileNamed:(id)arg0 ;
-(id)initWithFileNamed:(id)arg0 bundle:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(void)_connectToScene:(id)arg0 ;
-(void)_didMakeBackingNode;
-(void)_playLooped;
-(void)_setAudioName:(id)arg0 bundle:(id)arg1 ;
-(void)commonInit;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAudioFileName:(id)arg0 ;
-(void)setAudioURL:(id)arg0 ;


@end


#endif