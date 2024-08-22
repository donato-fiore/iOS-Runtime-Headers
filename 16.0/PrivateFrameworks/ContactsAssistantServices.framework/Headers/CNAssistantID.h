// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNASSISTANTID_H
#define CNASSISTANTID_H


#import <Foundation/Foundation.h>


@interface CNAssistantID : NSObject



+(id)assistantIDFromContact:(id)arg0 ;
+(id)assistantIDFromContactID:(id)arg0 ;
+(id)assistantIDFromContainer:(id)arg0 ;
+(id)assistantIDFromExternalIdentifier:(id)arg0 ;
+(id)assistantIDFromGroup:(id)arg0 ;
+(id)assistantIDOfType:(id)arg0 recordID:(int)arg1 databaseID:(id)arg2 identifier:(id)arg3 ;
+(id)contactIDFromAssistantID:(id)arg0 ;
+(id)containerIDFromAssistantID:(id)arg0 ;
+(id)databaseID;
+(id)externalIdentifierFromAssistantID:(id)arg0 ;
+(id)groupIDFromAssistantID:(id)arg0 ;


@end


#endif