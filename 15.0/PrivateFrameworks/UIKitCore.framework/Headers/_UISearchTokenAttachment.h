// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEARCHTOKENATTACHMENT_H
#define _UISEARCHTOKENATTACHMENT_H

@class NSTextAttachment;


#import "_UISearchTokenAttachmentViewProvider.h"
#import "UISearchToken.h"

@interface _UISearchTokenAttachment : NSTextAttachment

@property (readonly, nonatomic) _UISearchTokenAttachmentViewProvider *_viewProvider; // ivar: _viewProvider
@property (readonly, nonatomic) UISearchToken *token; // ivar: _token


+(BOOL)supportsSecureCoding;
-(BOOL)usesTextAttachmentView;
-(id)imageForBounds:(struct CGRect )arg0 textContainer:(id)arg1 characterIndex:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ofType:(id)arg1 ;
-(id)initWithToken:(id)arg0 ;
-(id)viewProviderForParentView:(id)arg0 characterIndex:(NSUInteger)arg1 layoutManager:(id)arg2 ;
-(id)viewProviderForParentView:(id)arg0 location:(id)arg1 textContainer:(id)arg2 ;
-(void)detachView:(id)arg0 fromParentView:(id)arg1 ;
-(void)placeView:(id)arg0 withFrame:(struct CGRect )arg1 inParentView:(id)arg2 characterIndex:(NSUInteger)arg3 layoutManager:(id)arg4 ;


@end


#endif