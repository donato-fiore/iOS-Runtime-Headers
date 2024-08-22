// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCDPCITEM_H
#define MCDPCITEM_H

@class NSData, UIImage, NSString;

#import <Foundation/Foundation.h>

#import "MCDPCModel.h"

@interface MCDPCItem : NSObject

@property (readonly, nonatomic) NSData *artworkData; // ivar: _artworkData
@property (retain, nonatomic) UIImage *artworkImage; // ivar: _artworkImage
@property (nonatomic) BOOL currentlyPlaying; // ivar: _currentlyPlaying
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isCloudItem; // ivar: _isCloudItem
@property (readonly, nonatomic) BOOL isContainer; // ivar: _isContainer
@property (readonly, nonatomic) BOOL isExplicitItem; // ivar: _isExplicitItem
@property (readonly, nonatomic) BOOL isPlayable; // ivar: _isPlayable
@property (readonly, weak, nonatomic) MCDPCModel *model; // ivar: _model
@property (readonly, nonatomic) float playbackProgress; // ivar: _playbackProgress
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)_initWithModel:(id)arg0 MRContentItem:(*void)arg1 ;
-(id)description;


@end


#endif