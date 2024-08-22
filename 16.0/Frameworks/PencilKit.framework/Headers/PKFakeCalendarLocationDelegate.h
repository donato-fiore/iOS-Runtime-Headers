// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFAKECALENDARLOCATIONDELEGATE_H
#define PKFAKECALENDARLOCATIONDELEGATE_H

@class UITableViewCell, UITableView, UIWindow, NSUUID, NSString;
@protocol PKScribbleInteractionElementSource, PKScribbleInteractionDelegate;

#import <Foundation/Foundation.h>


@interface PKFakeCalendarLocationDelegate : NSObject <PKScribbleInteractionElementSource, PKScribbleInteractionDelegate>

 {
    UITableViewCell *_cell;
    UITableView *_tableView;
    UIWindow *_window;
    NSUUID *_elementID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(id)_searchBarInView:(id)arg0 ;
-(id)initWithCell:(id)arg0 window:(id)arg1 ;
-(struct CGRect )_scribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg0 focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)_scribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;


@end


#endif