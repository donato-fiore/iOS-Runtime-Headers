// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGSUGGESTIONSTORE_H
#define SGSUGGESTIONSTORE_H

@class NSMutableArray, NSString, NSArray;
@protocol SGListDelegate, SGSuggestionDelegate;


#import "SGList.h"

@interface SGSuggestionStore : SGList <SGListDelegate>

 {
    NSMutableArray *_suggestions;
    NSInteger _notificationsLockCount;
    BOOL _modified;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger hostApp; // ivar: _hostApp
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: _suggestionDelegate
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly) Class superclass;


-(id)init;
-(id)sectionWithItem:(id)arg0 ;
-(void)addSuggestion:(id)arg0 ;
-(void)dismissAllSuggestions;
-(void)list:(id)arg0 didAddItem:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)list:(id)arg0 didRemoveItem:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)lockNotifications;
-(void)removeSuggestion:(id)arg0 ;
-(void)unlockNotifications;
-(void)updateSuggestion:(id)arg0 ;


@end


#endif