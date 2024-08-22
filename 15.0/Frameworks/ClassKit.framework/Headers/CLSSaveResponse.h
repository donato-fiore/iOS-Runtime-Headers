// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSSAVERESPONSE_H
#define CLSSAVERESPONSE_H

@class NSMutableDictionary, NSString;
@protocol CLSSaveResponse, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLSSaveResponse : NSObject <CLSSaveResponse>

 {
    NSMutableDictionary *_objectsByID;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)savedObjectWithObjectID:(id)arg0 ;
-(void)clientRemote_deliverObject:(id)arg0 ;
-(void)clientRemote_invalidate;
-(void)clientRemote_saveDone:(id)arg0 ;


@end


#endif