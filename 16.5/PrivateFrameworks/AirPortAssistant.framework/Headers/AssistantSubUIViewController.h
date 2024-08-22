// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASSISTANTSUBUIVIEWCONTROLLER_H
#define ASSISTANTSUBUIVIEWCONTROLLER_H

@class NSDictionary;


#import "AUUITableViewController.h"
#import "AssistantUIViewController.h"

@interface AssistantSubUIViewController : AUUITableViewController

@property (retain, nonatomic) NSDictionary *inParamDict; // ivar: _inParamDict
@property (readonly, nonatomic) NSDictionary *outResultsDict; // ivar: _outResultsDict
@property (nonatomic) AssistantUIViewController *parentController; // ivar: _parentController


+(id)containerViewWithWidth:(CGFloat)arg0 ;
+(id)labelViewInContainer:(*id)arg0 width:(CGFloat)arg1 ;
+(id)labelViewInContainer:(*id)arg0 width:(CGFloat)arg1 constrain:(BOOL)arg2 ;
+(id)labelViewInContainer:(*id)arg0 width:(CGFloat)arg1 withSpinner:(*id)arg2 above:(BOOL)arg3 ;
+(id)tableViewWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
+(id)topoViewWithWidth:(CGFloat)arg0 ;
-(id)getProductLocalizedStringWithFormat:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)setLeftNavigationButton:(id)arg0 enable:(BOOL)arg1 hide:(BOOL)arg2 ;
-(void)setRightNavigationButton:(id)arg0 enable:(BOOL)arg1 hide:(BOOL)arg2 ;
-(void)viewDidLoad;


@end


#endif