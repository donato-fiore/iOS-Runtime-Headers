// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHCONTENTEDITINGOUTPUTREQUESTOPTIONS_H
#define PHCONTENTEDITINGOUTPUTREQUESTOPTIONS_H


#import <Foundation/Foundation.h>


@interface PHContentEditingOutputRequestOptions : NSObject

@property (nonatomic, getter=isAsyncAdjustment) BOOL asyncAdjustment; // ivar: _asyncAdjustment
@property (nonatomic, getter=isOnlyChangingOriginalChoice) BOOL onlyChangingOriginalChoice; // ivar: _onlyChangingOriginalChoice
@property (nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (nonatomic) BOOL preferHEICForRenderedImages; // ivar: _preferHEICForRenderedImages


-(id)description;


@end


#endif