// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPHOTOPICKERADDITEMSPROVIDER_H
#define CNPHOTOPICKERADDITEMSPROVIDER_H

@class NSString;
@protocol CNPhotoPickerProvider;

#import <Foundation/Foundation.h>

#import "CNVisualIdentity.h"

@interface CNPhotoPickerAddItemsProvider : NSObject <CNPhotoPickerProvider>



@property (nonatomic) BOOL allowsEmoji; // ivar: _allowsEmoji
@property (nonatomic) BOOL allowsMonograms; // ivar: _allowsMonograms
@property (nonatomic) BOOL allowsPhotoFromLibraryItem; // ivar: _allowsPhotoFromLibraryItem
@property (nonatomic) BOOL allowsTakePhotoItem; // ivar: _allowsTakePhotoItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNVisualIdentity *visualIdentity; // ivar: _visualIdentity


-(id)addItemOfType:(NSUInteger)arg0 ;
-(id)initWithVisualIdentity:(id)arg0 ;
-(id)initWithVisualIdentity:(id)arg0 allowsTakePhotoItem:(BOOL)arg1 allowsPhotoFromLibraryItem:(BOOL)arg2 allowsMonograms:(BOOL)arg3 allowsEmoji:(BOOL)arg4 ;
-(id)loadItemsForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 RTL:(BOOL)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 itemDelegate:(id)arg5 ;
-(id)symbolImageNameForAddItemType:(NSUInteger)arg0 ;


@end


#endif