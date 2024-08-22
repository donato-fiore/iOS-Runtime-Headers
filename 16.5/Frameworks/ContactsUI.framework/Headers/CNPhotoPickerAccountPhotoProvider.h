// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPHOTOPICKERACCOUNTPHOTOPROVIDER_H
#define CNPHOTOPICKERACCOUNTPHOTOPROVIDER_H

@class NSString;
@protocol CNPhotoPickerProvider;

#import <Foundation/Foundation.h>

#import "CNVisualIdentity.h"

@interface CNPhotoPickerAccountPhotoProvider : NSObject <CNPhotoPickerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: identifier
@property (nonatomic) BOOL includeUnifiedContactImages; // ivar: _includeUnifiedContactImages
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNVisualIdentity *visualIdentity; // ivar: _visualIdentity


-(id)initWithVisualIdentity:(id)arg0 ;
-(id)initWithVisualIdentity:(id)arg0 includeUnifiedContactImages:(BOOL)arg1 ;
-(id)loadItemsForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 RTL:(BOOL)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 itemDelegate:(id)arg5 ;
-(id)providerItemForVisualIdentity:(id)arg0 forSize:(struct CGSize )arg1 scale:(CGFloat)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6 ;


@end


#endif