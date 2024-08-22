// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DUENTRYVIEWCONTROLLER_H
#define DUENTRYVIEWCONTROLLER_H

@class UIViewController;


#import "DUDefinitionValue.h"

@interface DUEntryViewController : UIViewController

@property (retain) DUDefinitionValue *definitionValue; // ivar: _definitionValue


+(id)entryViewControllerWithDefinitionValue:(id)arg0 ;
-(id)initWithDefinitionValue:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif