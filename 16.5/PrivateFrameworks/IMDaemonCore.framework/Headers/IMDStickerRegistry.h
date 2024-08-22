// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDSTICKERREGISTRY_H
#define IMDSTICKERREGISTRY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMDStickerRegistry : NSObject

@property (retain) NSMutableDictionary *stickerPackGUIDToPackMap; // ivar: _stickerPackGUIDToPackMap


+(id)sharedInstance;
-(BOOL)_isRecipeBasedSticker:(id)arg0 ;
-(id)_cachedPathForStickerWithProperties:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)retrieveStickerWithProperties:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif