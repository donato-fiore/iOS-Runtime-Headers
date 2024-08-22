// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSSTICKERPACKCOLLECTIONVIEWDATASOURCE_H
#define _MSSTICKERPACKCOLLECTIONVIEWDATASOURCE_H

@class NSString, NSMutableArray;
@protocol MSStickerBrowserViewDataSource;

#import <Foundation/Foundation.h>


@interface _MSStickerPackCollectionViewDataSource : NSObject <MSStickerBrowserViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger stickerSize; // ivar: _stickerSize
@property (readonly, nonatomic) NSMutableArray *stickers; // ivar: _stickers
@property (readonly) Class superclass;


+(NSInteger)_stickerSizeFromString:(id)arg0 ;
-(NSInteger)numberOfStickersInStickerBrowserView:(id)arg0 ;
-(id)_allStickers;
-(id)initWithStickerPackURL:(id)arg0 ;
-(id)stickerBrowserView:(id)arg0 stickerAtIndex:(NSInteger)arg1 ;
-(void)_loadStickerPackWithURL:(id)arg0 ;


@end


#endif