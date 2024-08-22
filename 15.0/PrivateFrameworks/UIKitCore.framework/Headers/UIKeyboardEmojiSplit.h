// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDEMOJISPLIT_H
#define UIKEYBOARDEMOJISPLIT_H

@class NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "UIKeyboardEmojiKeyView.h"
#import "UITableView.h"

@interface UIKeyboardEmojiSplit : UIKeyboardEmojiKeyView <UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) UITableView *picker; // ivar: _picker
@property (readonly) Class superclass;


-(BOOL)shouldCache;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)defaultIndexPath;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif