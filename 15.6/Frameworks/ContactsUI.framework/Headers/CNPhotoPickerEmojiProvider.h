// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPHOTOPICKEREMOJIPROVIDER_H
#define CNPHOTOPICKEREMOJIPROVIDER_H

@class NSString;
@protocol CNPhotoPickerProvider;

#import <Foundation/Foundation.h>

#import "CNPhotoPickerVariantsManager.h"
#import "CNVisualIdentity.h"

@interface CNPhotoPickerEmojiProvider : NSObject <CNPhotoPickerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager
@property (readonly, nonatomic) CNVisualIdentity *visualIdentity; // ivar: _visualIdentity


-(id)initWithVisualIdentity:(id)arg0 ;
-(id)loadItemsForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 RTL:(BOOL)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 itemDelegate:(id)arg5 ;


@end


#endif