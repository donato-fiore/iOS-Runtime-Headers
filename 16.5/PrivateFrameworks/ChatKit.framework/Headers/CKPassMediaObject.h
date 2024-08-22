// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPASSMEDIAOBJECT_H
#define CKPASSMEDIAOBJECT_H

@class UIImage;


#import "CKPassbookMediaObject.h"

@interface CKPassMediaObject : CKPassbookMediaObject

@property (retain, nonatomic) UIImage *icon; // ivar: _icon


-(id)generateThumbnailFillToSize:(struct CGSize )arg0 contentAlignmentInsets:(struct UIEdgeInsets )arg1 ;
-(id)initWithTransfer:(id)arg0 context:(id)arg1 forceInlinePreview:(BOOL)arg2 ;
-(id)passView;
-(id)subtitle;
-(id)title;


@end


#endif