// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKVIDEONODE_H
#define SKVIDEONODE_H

@class NSString, NSURL, AVPlayer;


#import "SKNode.h"

@interface SKVideoNode : SKNode {
    *void _skcVideoNode;
    BOOL _isUsingKVO;
    NSString *_videoFileName;
    NSURL *_videoFileURL;
    AVPlayer *_player;
}


@property (retain, nonatomic) AVPlayer *_player;
@property (nonatomic) CGPoint anchorPoint;
@property (nonatomic) CGSize size;


+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 outError:(*id)arg3 ;
+(id)videoNodeWithAVPlayer:(id)arg0 ;
+(id)videoNodeWithFileNamed:(id)arg0 ;
+(id)videoNodeWithURL:(id)arg0 ;
+(id)videoNodeWithVideoFileNamed:(id)arg0 ;
+(id)videoNodeWithVideoURL:(id)arg0 ;
-(*void)_makeBackingNode;
-(BOOL)isEqualToNode:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAVPlayer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileNamed:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithVideoFileNamed:(id)arg0 ;
-(id)initWithVideoURL:(id)arg0 ;
-(void)_didMakeBackingNode;
-(void)commonInit;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)setPaused:(BOOL)arg0 ;


@end


#endif