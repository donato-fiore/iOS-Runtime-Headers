// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUICOMMAND_H
#define SEARCHUICOMMAND_H

@class SFCommand;

#import <Foundation/Foundation.h>

#import "SearchUICommandEnvironment.h"
#import "SearchUIRowModel.h"

@interface SearchUICommand : NSObject

@property (retain, nonatomic) SFCommand *command; // ivar: _command
@property (retain, nonatomic) SearchUICommandEnvironment *commandEnvironment; // ivar: _commandEnvironment
@property (retain, nonatomic) SearchUIRowModel *rowModel; // ivar: _rowModel


+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
+(Class)supportedCommandClassForClasses:(id)arg0 rowModel:(id)arg1 environment:(id)arg2 ;
+(id)commandForRowModel:(id)arg0 environment:(id)arg1 ;
+(id)mainRowModelForRowModel:(id)arg0 ;
+(id)peekCommandForRowModel:(id)arg0 environment:(id)arg1 ;
+(id)tapCommandForRowModel:(id)arg0 command:(id)arg1 environment:(id)arg2 ;
+(id)tapCommandForRowModel:(id)arg0 environment:(id)arg1 ;
-(BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForFileURL:(id)arg0 performOpenIfSo:(BOOL)arg1 ;
-(NSUInteger)destination;
-(id)cardSectionEngagementFeedback;
-(id)generateCardViewControllerForPeek:(BOOL)arg0 withCard:(id)arg1 ;
-(id)initWithRowModel:(id)arg0 command:(id)arg1 environment:(id)arg2 ;
-(id)resultEngagementFeedback;
-(id)storeViewControllerWithIdentifier:(id)arg0 ;
-(void)sendCardFeedback;
-(void)sendResultFeedback;


@end


#endif