// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDINTERACTIONADVISORSIMPLE_H
#define _CDINTERACTIONADVISORSIMPLE_H

@protocol _CDInteractionAdvising;

#import <Foundation/Foundation.h>


@interface _CDInteractionAdvisorSimple : NSObject

@property (retain) NSObject<_CDInteractionAdvising> *interactionAdvisor; // ivar: _interactionAdvisor


+(id)advisorSettingsForMatchingDisplayName:(id)arg0 mechanism:(NSInteger)arg1 date:(id)arg2 count:(NSInteger)arg3 ;
+(id)advisorSettingsForMatchingHandles:(id)arg0 mechanism:(NSInteger)arg1 date:(id)arg2 count:(NSInteger)arg3 ;
+(id)advisorSettingsForMatchingPersonID:(id)arg0 mechanism:(NSInteger)arg1 date:(id)arg2 count:(NSInteger)arg3 ;
-(id)bestInteractionMatchingContactID:(id)arg0 mechanism:(NSInteger)arg1 ;
-(id)bestInteractionMatchingDisplayName:(id)arg0 mechanism:(NSInteger)arg1 ;
-(id)bestInteractionMatchingHandles:(id)arg0 mechanism:(NSInteger)arg1 ;
-(id)init;
-(id)initWithCoreDuetDaemon;
-(id)initWithCoreDuetDatabase;
-(id)initWithInteractionAdvisor:(id)arg0 ;
-(id)rankedInteractionsForDisplayName:(id)arg0 mechanism:(NSInteger)arg1 count:(NSInteger)arg2 ;
-(id)rankedInteractionsForDisplayName:(id)arg0 mechanism:(NSInteger)arg1 count:(NSInteger)arg2 date:(id)arg3 ;
-(id)rankedInteractionsForHandles:(id)arg0 mechanism:(NSInteger)arg1 count:(NSInteger)arg2 ;
-(id)rankedInteractionsForHandles:(id)arg0 mechanism:(NSInteger)arg1 count:(NSInteger)arg2 date:(id)arg3 ;
-(id)rankedInteractionsForPersonId:(id)arg0 mechanism:(NSInteger)arg1 count:(NSInteger)arg2 ;
-(id)rankedInteractionsForPersonId:(id)arg0 mechanism:(NSInteger)arg1 count:(NSInteger)arg2 date:(id)arg3 ;


@end


#endif