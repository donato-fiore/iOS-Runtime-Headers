// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINPUTCONTEXTHISTORY_H
#define UIINPUTCONTEXTHISTORY_H

@class NSSet, NSString, TIInputContextHistory;

#import <Foundation/Foundation.h>


@interface UIInputContextHistory : NSObject

@property (readonly, nonatomic) NSSet *recipientIdentifiers;
@property (readonly, nonatomic) NSSet *recipientNames;
@property (readonly, nonatomic) NSString *senderIdentifier;
@property (readonly, nonatomic) NSSet *senderIdentifiers;
@property (readonly, nonatomic) TIInputContextHistory *tiInputContextHistory; // ivar: _tiInputContextHistory


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithRecipientIdentifiers:(id)arg0 ;
-(id)initWithRecipientIdentifiers:(id)arg0 senderIdentifier:(id)arg1 ;
-(id)initWithRecipientIdentifiers:(id)arg0 senderIdentifiers:(id)arg1 ;
-(id)mostRecentTextEntries:(NSUInteger)arg0 ;
-(void)addTextEntry:(id)arg0 timestamp:(id)arg1 ;
-(void)addTextEntry:(id)arg0 timestamp:(id)arg1 senderIdentifier:(id)arg2 ;
-(void)updateRecipientNames:(id)arg0 ;


@end


#endif