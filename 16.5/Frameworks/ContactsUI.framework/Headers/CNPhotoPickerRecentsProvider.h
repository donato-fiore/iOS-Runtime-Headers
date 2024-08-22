// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPHOTOPICKERRECENTSPROVIDER_H
#define CNPHOTOPICKERRECENTSPROVIDER_H

@class NSString;
@protocol CNPhotoPickerProvider;

#import <Foundation/Foundation.h>

#import "CNVisualIdentity.h"

@interface CNPhotoPickerRecentsProvider : NSObject <CNPhotoPickerProvider>



@property (nonatomic) BOOL containsContactImage; // ivar: _containsContactImage
@property (nonatomic) BOOL containsMonogram; // ivar: _containsMonogram
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNVisualIdentity *visualIdentity; // ivar: _visualIdentity


+(id)log;
-(id)initWithVisualIdentity:(id)arg0 ;
-(id)loadItemsForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 RTL:(BOOL)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 itemDelegate:(id)arg5 ;
-(id)providerItemForContactImage:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 ;


@end


#endif