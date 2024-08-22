// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SIRISETUP16VOICEOPTIONSVIEW_H
#define _TTC9SIRISETUP16VOICEOPTIONSVIEW_H

@protocol UITableViewDataSource, UITableViewDelegate, SUICVoiceSelectionDisplaying, SUICVoiceSelectionEventHandling, SUICVoiceSelectionViewModelProviding;

#import <Foundation/Foundation.h>


@interface _TtC9SiriSetup16VoiceOptionsView : NSObject <UITableViewDataSource, UITableViewDelegate, SUICVoiceSelectionDisplaying>

 {
    ? tableView;
    ? viewModel;
    ? cellReuseIdentifier;
}


@property (nonatomic, retain) NSObject<SUICVoiceSelectionEventHandling> *voiceSelectionEventHandler; // ivar: voiceSelectionEventHandler
@property (nonatomic, retain) NSObject<SUICVoiceSelectionViewModelProviding> *voiceSelectionViewModelProvider; // ivar: voiceSelectionViewModelProvider


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)voiceSelectionViewModelDidChange;


@end


#endif