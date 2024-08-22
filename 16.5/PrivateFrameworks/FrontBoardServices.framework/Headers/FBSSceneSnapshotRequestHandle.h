// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSSCENESNAPSHOTREQUESTHANDLE_H
#define FBSSCENESNAPSHOTREQUESTHANDLE_H

@class BSActionResponder;

#import <Foundation/Foundation.h>

#import "FBSSceneSnapshotContext.h"

@interface FBSSceneSnapshotRequestHandle : NSObject {
    NSUInteger _type;
    FBSSceneSnapshotContext *_context;
    BSActionResponder *_responder;
    BOOL _canceled;
}




+(id)handleForRequestType:(NSUInteger)arg0 context:(id)arg1 ;
-(id)initWithRequestType:(NSUInteger)arg0 context:(id)arg1 ;
-(void)_clearAction;
-(void)cancelRequest;
-(void)performRequestForScene:(id)arg0 ;


@end


#endif