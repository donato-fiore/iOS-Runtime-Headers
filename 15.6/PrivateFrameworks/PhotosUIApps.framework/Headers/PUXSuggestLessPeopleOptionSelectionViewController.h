// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUXSUGGESTLESSPEOPLEOPTIONSELECTIONVIEWCONTROLLER_H
#define PUXSUGGESTLESSPEOPLEOPTIONSELECTIONVIEWCONTROLLER_H

@class UIViewController, NSArray;
@protocol PXSuggestLessPeopleOptionSelectionViewController;



@interface PUXSuggestLessPeopleOptionSelectionViewController : UIViewController <PXSuggestLessPeopleOptionSelectionViewController>

 {
    ? people;
    ? delegate;
    ? completionHandler;
}


@property (nonatomic, copy) NSArray *people;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPeople:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(void)setupOptionSelectionView;
-(void)viewDidLoad;


@end


#endif