// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPHOTOPICKERMONOGRAMPROVIDER_H
#define CNPHOTOPICKERMONOGRAMPROVIDER_H

@class NSString;
@protocol CNPhotoPickerProvider;

#import <Foundation/Foundation.h>

#import "CNVisualIdentity.h"

@interface CNPhotoPickerMonogramProvider : NSObject <CNPhotoPickerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNVisualIdentity *visualIdentity; // ivar: _visualIdentity


+(id)generateMonogramItemForVisualIdentity:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 RTL:(BOOL)arg3 isVariantOptionItem:(BOOL)arg4 backgroundColor:(id)arg5 ;
+(id)monogramProviderItemForVisualIdentity:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 RTL:(BOOL)arg3 isVariantOptionItem:(BOOL)arg4 backgroundColor:(id)arg5 ;
+(id)providerItemForVisualIdentity:(id)arg0 size:(struct CGSize )arg1 RTL:(BOOL)arg2 ;
+(id)providerItemForVisualIdentity:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 RTL:(BOOL)arg3 backgroundColor:(id)arg4 ;
-(id)initWithVisualIdentity:(id)arg0 ;
-(id)loadItemsForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 RTL:(BOOL)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 itemDelegate:(id)arg5 ;


@end


#endif