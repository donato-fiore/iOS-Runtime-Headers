// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNAVATARIMAGEPROVIDER_H
#define _CNAVATARIMAGEPROVIDER_H

@class NSString;
@protocol CNAvatarImageProvider, CNUIPRLikenessProvider;

#import <Foundation/Foundation.h>


@interface _CNAvatarImageProvider : NSObject <CNAvatarImageProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNUIPRLikenessProvider> *likenessProvider; // ivar: _likenessProvider
@property (readonly) Class superclass;


+(id)roundImage:(id)arg0 ;
-(id)imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 style:(NSUInteger)arg2 ;
-(id)initWithLikenessProvider:(id)arg0 ;


@end


#endif