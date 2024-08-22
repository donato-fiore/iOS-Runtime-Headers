// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NTKCBRIDGEINTERFACETHEME_H
#define _NTKCBRIDGEINTERFACETHEME_H

@class PUFlatWhiteInterfaceTheme;



@interface _NTKCBridgeInterfaceTheme : PUFlatWhiteInterfaceTheme



-(NSUInteger)emptyPlaceholderStyle;
-(id)albumListBackgroundColor;
-(id)emptyPlaceholderViewBackgroundColor;
-(id)photoCollectionViewBackgroundColor;
-(int)photoCollectionViewBackgroundColorValue;
-(void)configureAlbumListStackViewPhonePhotoDecoration:(id)arg0 ;
-(void)configureAlbumListSubtitleLabel:(id)arg0 asOpaque:(BOOL)arg1 ;
-(void)configureAlbumListTitleLabel:(id)arg0 asOpaque:(BOOL)arg1 ;
-(void)configureAlbumListTitleTextField:(id)arg0 asOpaque:(BOOL)arg1 ;


@end


#endif