// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBICONLISTMODELTRANSACTION_H
#define _SBICONLISTMODELTRANSACTION_H

@class NSMutableSet, NSString;

#import <Foundation/Foundation.h>


@interface _SBIconListModelTransaction : NSObject {
    NSMutableSet *_addedNodeIdentifiers;
    NSMutableSet *_deletedNodeIdentifiers;
}


@property (readonly, copy, nonatomic) NSString *requestID; // ivar: _requestID


-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithRequestID:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addNodeIdentifiers:(id)arg0 ;
-(void)commitChangesToObservers:(id)arg0 forNode:(id)arg1 ;
-(void)removeNodeIdentifiers:(id)arg0 ;


@end


#endif