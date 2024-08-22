// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WRCANNEDREPLIESVIEWCONTROLLER_H
#define WRCANNEDREPLIESVIEWCONTROLLER_H

@class PSListController, PSSpecifier, UIImage;


#import "WRCannedRepliesStore.h"

@interface WRCannedRepliesViewController : PSListController {
    WRCannedRepliesStore *_repliesStore;
    PSSpecifier *_addNewSpecifier;
    PSSpecifier *_smartRepliesSpecifier;
    UIImage *_accessoryImage;
    UIImage *_highlightedAccessoryImage;
    BOOL _supportedEnhancedEditing;
}


@property (readonly, nonatomic) NSUInteger category; // ivar: _category


-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSUInteger)numberOfDefaultReplySpecifiers;
-(id)cannedReplies;
-(id)cannedRepliesFromSpecifiers;
-(id)customReply:(id)arg0 ;
-(id)includeSmartReplies;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)newCannedReplySpecifier;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_returnKeyPressed:(id)arg0 ;
-(void)addNewReply:(id)arg0 ;
-(void)configureCellAccessoryImage:(id)arg0 ;
-(void)loadRepliesStoreIfNeeded;
-(void)returnPressedAtEnd;
-(void)saveReplies;
-(void)setCustomReply:(id)arg0 specifier:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setIncludeSmartReplies:(id)arg0 specifier:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)updateEditDoneButton;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif