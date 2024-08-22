// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKSNIPPETDIALOGREQUEST_H
#define WFLINKSNIPPETDIALOGREQUEST_H

@class WFDialogRequest, LNViewSnippet;
@protocol NSSecureCoding;



@interface WFLinkSnippetDialogRequest : WFDialogRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) LNViewSnippet *viewSnippet; // ivar: _viewSnippet


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithViewSnippet:(id)arg0 attribution:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif