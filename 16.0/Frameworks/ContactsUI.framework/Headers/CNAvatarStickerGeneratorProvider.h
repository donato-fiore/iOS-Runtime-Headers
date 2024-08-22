// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAVATARSTICKERGENERATORPROVIDER_H
#define CNAVATARSTICKERGENERATORPROVIDER_H

@class AVTStickerGenerator;
@protocol AVTAvatarRecord;

#import <Foundation/Foundation.h>


@interface CNAvatarStickerGeneratorProvider : NSObject

@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) AVTStickerGenerator *generator; // ivar: _generator


-(id)initWithAvatarRecord:(id)arg0 ;


@end


#endif