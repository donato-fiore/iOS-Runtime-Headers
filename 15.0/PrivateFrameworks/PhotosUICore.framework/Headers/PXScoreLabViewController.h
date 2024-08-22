// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSCORELABVIEWCONTROLLER_H
#define PXSCORELABVIEWCONTROLLER_H

@class UIViewController, UIPickerView, UITextField, NSArray, NSDictionary, NSString;
@protocol UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate, _PXScoreLabGraphViewDelegate;


#import "_PXScoreLabGraphView.h"
#import "PXRoundProgressView.h"

@interface PXScoreLabViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate, _PXScoreLabGraphViewDelegate>

 {
    UIPickerView *_xScorePickerView;
    UITextField *_xScoreSceneNameField;
    UIPickerView *_graphTypePickerView;
    UIPickerView *_yScorePickerView;
    UITextField *_yScoreSceneNameField;
    UIPickerView *_assetFilterPickerView;
    _PXScoreLabGraphView *_graphView;
    PXRoundProgressView *_progressView;
    NSArray *_scoreNames;
    NSDictionary *_keyPathByScoreName;
    NSDictionary *_timestampKeyPathByPrefix;
    NSArray *_assetFilterNames;
    NSDictionary *_assetPredicateByFilterName;
    NSDictionary *_taxonomy;
    NSDictionary *_sceneIdentifierBySceneName;
    BOOL _redrawIsDisabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)init;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)valueGetterForSceneIdentifier:(SEL)arg0 ;
-(id)valueGetterForScoreKeyPath:(SEL)arg0 ;
-(unsigned int)identifierForSceneName:(id)arg0 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)redrawGraph;
-(void)sceneNameChanged:(id)arg0 ;
-(void)scoreLabGraphView:(id)arg0 reloadProgressed:(CGFloat)arg1 ;
-(void)scoreLabGraphViewDidFinishReloading:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif