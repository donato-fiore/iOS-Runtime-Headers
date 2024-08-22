// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUXSUGGESTLESSPEOPLESELECTIONVIEWCONTROLLER_H
#define PUXSUGGESTLESSPEOPLESELECTIONVIEWCONTROLLER_H

@class UIViewController, NSArray;
@protocol PXSuggestLessPeopleSelectionViewController;



@interface PUXSuggestLessPeopleSelectionViewController : UIViewController <PXSuggestLessPeopleSelectionViewController>

 {
    ? people;
    ? delegate;
    ? completionHandler;
}


@property (nonatomic, copy) NSArray *people;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPeople:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(void)setupSelectionView;
-(void)viewDidLoad;


@end


#endif