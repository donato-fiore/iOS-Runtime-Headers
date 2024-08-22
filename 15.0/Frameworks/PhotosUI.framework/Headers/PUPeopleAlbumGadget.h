// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPEOPLEALBUMGADGET_H
#define PUPEOPLEALBUMGADGET_H

@class PXPeopleAlbumProvider;


#import "PUAlbumGadget.h"

@interface PUPeopleAlbumGadget : PUAlbumGadget

@property (retain, nonatomic) PXPeopleAlbumProvider *albumProvider; // ivar: _albumProvider


-(id)albumListCellContentView;
-(id)initWithCollection:(id)arg0 albumGadgetDelegate:(id)arg1 ;
-(id)title;
-(void)_configureSubtitleForAlbumListCellContentView:(id)arg0 ;
-(void)_peopleAlbumChanged:(id)arg0 ;
-(void)_setSubtitleForPeopleCount:(NSInteger)arg0 onAlbumListCellContentView:(id)arg1 ;
-(void)contentViewWillAppear;
-(void)dealloc;
-(void)reconfigure;


@end


#endif