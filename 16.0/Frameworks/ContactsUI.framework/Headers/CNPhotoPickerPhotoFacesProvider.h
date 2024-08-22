// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPHOTOPICKERPHOTOFACESPROVIDER_H
#define CNPHOTOPICKERPHOTOFACESPROVIDER_H

@class NSString;
@protocol CNPhotoPickerProvider;

#import <Foundation/Foundation.h>

#import "CNVisualIdentity.h"

@interface CNPhotoPickerPhotoFacesProvider : NSObject <CNPhotoPickerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNVisualIdentity *visualIdentity; // ivar: _visualIdentity


+(id)log;
-(id)getItemsFromPhotoLibraryWithItemDelegate:(id)arg0 ;
-(id)initWithVisualIdentity:(id)arg0 ;
-(id)loadItemsForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 RTL:(BOOL)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 itemDelegate:(id)arg5 ;
-(struct CGRect )cropRectForAsset:(id)arg0 face:(id)arg1 ;


@end


#endif