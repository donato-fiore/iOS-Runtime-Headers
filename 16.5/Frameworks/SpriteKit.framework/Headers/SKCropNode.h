// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKCROPNODE_H
#define SKCROPNODE_H



#import "SKNode.h"

@interface SKCropNode : SKNode {
    SKNode *_mask;
    *void _skcCropNode;
}


@property (nonatomic) BOOL invertMask;
@property (retain, nonatomic) SKNode *maskNode;
@property (nonatomic) BOOL prefersAlphaMask;


+(BOOL)supportsSecureCoding;
-(*void)_makeBackingNode;
-(BOOL)isEqualToNode:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_didMakeBackingNode;
-(void)encodeWithCoder:(id)arg0 ;
-(void)useAlphaMask:(BOOL)arg0 ;


@end


#endif