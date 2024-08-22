// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFAKENOTESDELEGATE_H
#define PKFAKENOTESDELEGATE_H

@class UITextView, NSString;
@protocol PKScribbleInteractionDelegate;

#import <Foundation/Foundation.h>


@interface PKFakeNotesDelegate : NSObject <PKScribbleInteractionDelegate>

 {
    UITextView *_textView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(id)initWithTextView:(id)arg0 ;
-(void)_scribbleInteraction:(id)arg0 willBeginWritingInElement:(id)arg1 ;


@end


#endif