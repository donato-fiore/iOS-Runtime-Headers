// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPUNCHOUTVIEWMODEL_H
#define MUPUNCHOUTVIEWMODEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MUPunchoutViewModel : NSObject

@property (retain, nonatomic) NSString *punchoutText; // ivar: _punchoutText
@property (retain, nonatomic) NSString *symbolName; // ivar: _symbolName


+(id)viewModelForAddPhotos;
+(id)viewModelForFullScreenGallery;
+(id)viewModelForVendorName:(id)arg0 ;


@end


#endif