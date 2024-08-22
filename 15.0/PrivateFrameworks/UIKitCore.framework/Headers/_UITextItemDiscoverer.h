// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTITEMDISCOVERER_H
#define _UITEXTITEMDISCOVERER_H

@class NSString, UIView<_UITextContent>;
@protocol _UITextItemDiscoverable, UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface _UITextItemDiscoverer : NSObject <_UITextItemDiscoverable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *textItemCoordinateSpace;
@property (readonly, weak, nonatomic) UIView<_UITextContent> *view; // ivar: _view


-(BOOL)hasTextItemsOfType:(NSInteger)arg0 inTextRange:(id)arg1 ;
-(id)_anyTextItemConstrainedToLineAtPoint:(struct CGPoint )arg0 ;
-(id)_textReferenceView;
-(id)initWithView:(id)arg0 ;
-(id)textItemsOfType:(NSInteger)arg0 inTextRange:(id)arg1 ;
-(id)visibleTextRange;
-(struct CGRect )_visibleBounds;
-(struct _NSRange )_nsrangeForTextRange:(id)arg0 ;


@end


#endif