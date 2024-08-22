// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMAILMESSAGELIBRARYQUERYTRANSFORMER_H
#define MFMAILMESSAGELIBRARYQUERYTRANSFORMER_H

@class NSString, EDMessagePersistence;
@protocol EFLoggable, MFMessageCriterionConverterDelegate;

#import <Foundation/Foundation.h>

#import "MFMessageCriterionConverter.h"

@interface MFMailMessageLibraryQueryTransformer : NSObject <EFLoggable, MFMessageCriterionConverterDelegate>



@property (retain, nonatomic) MFMessageCriterionConverter *criterionConverter; // ivar: _criterionConverter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly) Class superclass;


+(id)log;
-(NSInteger)messageCriterionConverter:(id)arg0 criterionTypeForKey:(id)arg1 ;
-(id)criterionForQuery:(id)arg0 ;
-(id)initWithMessagePersistence:(id)arg0 ;
-(id)mailAccountForIdentifier:(id)arg0 ;
-(id)messageCriterionConverter:(id)arg0 expressionForConstantValue:(id)arg1 withCriterionType:(NSInteger)arg2 ;
-(unsigned int)optionsForQuery:(id)arg0 ;


@end


#endif