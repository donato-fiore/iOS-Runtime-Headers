// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSERIALIZEDSMARTPROMPTPERWORKFLOWSTATE_H
#define WFSERIALIZEDSMARTPROMPTPERWORKFLOWSTATE_H

@class NSString, NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface WFSerializedSmartPromptPerWorkflowState : NSObject

@property (readonly, nonatomic) NSString *actionUUID; // ivar: _actionUUID
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithData:(id)arg0 actionUUID:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif