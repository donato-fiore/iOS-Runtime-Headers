// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUACTIVITYVIEWCONTROLLER_H
#define SUACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController, NSMutableDictionary, NSArray;



@interface SUActivityViewController : UIActivityViewController {
    NSMutableDictionary *_customTitles;
    NSArray *_suActivityItems;
    NSInteger _transitionSafetyCount;
}




-(id)_titleForActivity:(id)arg0 ;
-(id)initWithActivityItems:(id)arg0 applicationActivities:(id)arg1 ;
-(void)_performActivity:(id)arg0 ;
-(void)_prepareActivity:(id)arg0 ;
-(void)dealloc;
-(void)setTitle:(id)arg0 forActivityType:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif