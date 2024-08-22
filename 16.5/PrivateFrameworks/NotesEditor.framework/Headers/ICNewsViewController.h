// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNEWSVIEWCONTROLLER_H
#define ICNEWSVIEWCONTROLLER_H

@class UIViewController, ICAttachment, NSSNewsViewController, NSURL;



@interface ICNewsViewController : UIViewController

@property (retain, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (retain, nonatomic) NSSNewsViewController *newsViewController; // ivar: _newsViewController
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(BOOL)_canShowWhileLocked;
-(id)initWithURL:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif