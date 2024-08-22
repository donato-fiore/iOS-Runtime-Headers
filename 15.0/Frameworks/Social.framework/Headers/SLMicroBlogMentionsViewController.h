// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLMICROBLOGMENTIONSVIEWCONTROLLER_H
#define SLMICROBLOGMENTIONSVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, SLMicroBlogSheetDelegate, SLMicroBlogMentionsDelegate;



@interface SLMicroBlogMentionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

 {
    NSObject<SLMicroBlogSheetDelegate> *_sheetDelegate;
    NSArray *_mentions;
    NSString *_searchString;
    UITableView *_tableView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SLMicroBlogMentionsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_blankSurrogateProfileImage;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithSheetDelegate:(id)arg0 ;
-(id)mentions;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)chooseRow:(NSInteger)arg0 ;
-(void)completeWithSelectedMention:(id)arg0 ;
-(void)loadView;
-(void)setMentions:(id)arg0 ;
-(void)setSearchString:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateMentions;


@end


#endif