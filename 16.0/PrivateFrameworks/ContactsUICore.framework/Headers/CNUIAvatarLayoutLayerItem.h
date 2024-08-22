// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIAVATARLAYOUTLAYERITEM_H
#define CNUIAVATARLAYOUTLAYERITEM_H

@class CALayer;
@protocol CNCancelable;

#import <Foundation/Foundation.h>


@interface CNUIAvatarLayoutLayerItem : NSObject

@property (retain, nonatomic) NSObject<CNCancelable> *avatarImageRendererToken; // ivar: _avatarImageRendererToken
@property (retain, nonatomic) CALayer *layer; // ivar: _layer


-(id)initWithLayer:(id)arg0 ;
-(void)resetToken;


@end


#endif