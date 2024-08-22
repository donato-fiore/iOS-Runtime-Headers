// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLSERIALIZEDFEEDBACKMESSAGE_H
#define CPLSERIALIZEDFEEDBACKMESSAGE_H

@class NSDictionary, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "CPLServerFeedbackMessage.h"

@interface CPLSerializedFeedbackMessage : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *feedbackType; // ivar: _feedbackType
@property (readonly, nonatomic) CPLServerFeedbackMessage *serverMessage; // ivar: _serverMessage
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)messagesForPlistRepresentation:(id)arg0 ;
+(id)plistRepresentationForMessages:(id)arg0 ;
-(id)description;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;


@end


#endif