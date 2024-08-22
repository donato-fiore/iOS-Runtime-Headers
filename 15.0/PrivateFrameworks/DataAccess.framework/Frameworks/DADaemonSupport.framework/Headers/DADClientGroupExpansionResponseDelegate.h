// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DADCLIENTGROUPEXPANSIONRESPONSEDELEGATE_H
#define DADCLIENTGROUPEXPANSIONRESPONSEDELEGATE_H

@class NSString, NSData;
@protocol DAEventsGroupExpansionResponseConsumer;


#import "DADClientDelegate.h"

@interface DADClientGroupExpansionResponseDelegate : DADClientDelegate <DAEventsGroupExpansionResponseConsumer>

 {
    NSString *_principalPath;
    NSData *_resultsData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccountID:(id)arg0 client:(id)arg1 principalPath:(id)arg2 ;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)groupExpansionFinishedWithResults:(id)arg0 error:(id)arg1 ;
-(void)performRequest;


@end


#endif