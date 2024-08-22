// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFXEFFECTMESSAGESSTICKERPROPERTIES_H
#define CFXEFFECTMESSAGESSTICKERPROPERTIES_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface CFXEffectMessagesStickerProperties : NSObject

@property (readonly, nonatomic) NSString *effectID; // ivar: _effectID
@property (readonly, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, nonatomic) NSURL *previewUrl; // ivar: _previewUrl


-(id)initWithEffectID:(id)arg0 previewUrl:(id)arg1 localizedDescription:(id)arg2 ;


@end


#endif