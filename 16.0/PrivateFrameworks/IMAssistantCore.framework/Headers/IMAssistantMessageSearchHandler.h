// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMASSISTANTMESSAGESEARCHHANDLER_H
#define IMASSISTANTMESSAGESEARCHHANDLER_H

@class NSString;
@protocol INSearchForMessagesIntentHandling, IMAssistantMessageAttributeSanitizer;


#import "IMAssistantMessageQueryHandler.h"

@interface IMAssistantMessageSearchHandler : IMAssistantMessageQueryHandler <INSearchForMessagesIntentHandling>



@property (retain, nonatomic) NSObject<IMAssistantMessageAttributeSanitizer> *attributeSanitizer; // ivar: _attributeSanitizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAttributeSanitizer:(id)arg0 intentIdentifier:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 attributeSanitizer:(id)arg1 intentIdentifier:(id)arg2 ;
-(id)initWithDataSource:(id)arg0 intentIdentifier:(id)arg1 ;
-(id)initWithIntentIdentifier:(id)arg0 ;
-(id)resolveSpeakableGroupNames:(id)arg0 forIntent:(id)arg1 ;
-(void)handleSearchForMessages:(id)arg0 completion:(id)arg1 ;
-(void)resolveAttributesForSearchForMessages:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveRecipientsAndSender:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveRecipientsForSearchForMessages:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveSendersForSearchForMessages:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveSpeakableGroupNamesForSearchForMessages:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif