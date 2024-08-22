// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETERESULTFACTORY_H
#define CNAUTOCOMPLETERESULTFACTORY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNAutocompleteResultFactory : NSObject {
    NSString *_preferredDomain;
    NSString *_sendingAddress;
}




+(id)factoryWithPriorityDomain:(id)arg0 sendingAddress:(id)arg1 ;
-(id)MAIDGroupResultWithDisplayName:(id)arg0 groupIdentifier:(id)arg1 membersProvider:(id)arg2 ;
-(id)MAIDResultWithDisplayName:(id)arg0 value:(id)arg1 nameComponents:(id)arg2 ;
-(id)calendarServerResultWithDisplayName:(id)arg0 value:(id)arg1 nameComponents:(id)arg2 userInfo:(id)arg3 ;
-(id)directoryServerResultWithDisplayName:(id)arg0 value:(id)arg1 nameComponents:(id)arg2 ;
-(id)duetGroupResultWithDisplayName:(id)arg0 groupIdentifier:(id)arg1 membersProvider:(id)arg2 ;
-(id)duetResultWithDisplayName:(id)arg0 value:(id)arg1 contactIdentifier:(id)arg2 ;
-(id)extensionGroupResultWithDisplayName:(id)arg0 groupIdentifier:(id)arg1 membersProvider:(id)arg2 ;
-(id)extensionResultWithDisplayName:(id)arg0 value:(id)arg1 nameComponents:(id)arg2 ;
-(id)frequentRecentResultWithDisplayName:(id)arg0 value:(id)arg1 lastSendingAddress:(id)arg2 date:(id)arg3 group:(BOOL)arg4 completesChosenGroup:(BOOL)arg5 ;
-(id)infrequentRecentResultWithDisplayName:(id)arg0 value:(id)arg1 lastSendingAddress:(id)arg2 dateCount:(NSUInteger)arg3 date:(id)arg4 group:(BOOL)arg5 completesChosenGroup:(BOOL)arg6 ;
-(id)initWithPriorityDomain:(id)arg0 sendingAddress:(id)arg1 ;
-(id)localContactResultWithDisplayName:(id)arg0 value:(id)arg1 nameComponents:(id)arg2 contactIdentifier:(id)arg3 ;
-(id)localGroupResultWithDisplayName:(id)arg0 groupIdentifier:(id)arg1 ;
-(id)localGroupResultWithDisplayName:(id)arg0 groupIdentifier:(id)arg1 membersProvider:(id)arg2 ;
-(id)recentResultWithDisplayName:(id)arg0 value:(id)arg1 lastSendingAddress:(id)arg2 dateCount:(NSUInteger)arg3 date:(id)arg4 group:(BOOL)arg5 completesChosenGroup:(BOOL)arg6 ;
-(id)suggestedResultWithDisplayName:(id)arg0 value:(id)arg1 nameComponents:(id)arg2 ;
-(void)applyLastSendingAddressBitToResult:(id)arg0 ;
-(void)applyPreferredDomainBitToResult:(id)arg0 ;
-(void)applySearchContextToResult:(id)arg0 ;


@end


#endif