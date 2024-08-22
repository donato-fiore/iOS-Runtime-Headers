// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPUNCHOUTVIEWMODEL_H
#define MUPUNCHOUTVIEWMODEL_H

@class UIMenu, NSString;

#import <Foundation/Foundation.h>


@interface MUPunchoutViewModel : NSObject

@property (retain, nonatomic) UIMenu *menu; // ivar: _menu
@property (retain, nonatomic) NSString *punchoutText; // ivar: _punchoutText
@property (retain, nonatomic) NSString *symbolName; // ivar: _symbolName


+(id)viewModelForAddPhotos;
+(id)viewModelForFullScreenGallery;
+(id)viewModelForVendorName:(id)arg0 ;


@end


#endif