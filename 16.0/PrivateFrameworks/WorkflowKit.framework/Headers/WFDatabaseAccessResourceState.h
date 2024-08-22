// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDATABASEACCESSRESOURCESTATE_H
#define WFDATABASEACCESSRESOURCESTATE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface WFDatabaseAccessResourceState : NSObject

@property (readonly, nonatomic) NSData *perWorkflowStateData; // ivar: _perWorkflowStateData
@property (readonly, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier


-(id)initWithPersistentIdentifier:(id)arg0 perWorkflowStateData:(id)arg1 ;


@end


#endif