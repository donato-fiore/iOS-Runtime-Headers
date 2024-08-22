// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HRWDACTIVITYNODE_H
#define _HRWDACTIVITYNODE_H

@class NSMutableDictionary, NSDictionary, NSMapTable;
@protocol HRWDUserActivityResponder;

#import <Foundation/Foundation.h>


@interface _HRWDActivityNode : NSObject {
    NSMutableDictionary *_responderActivity;
    NSDictionary *_nextResponderActivity;
    NSMapTable *_responderTable;
}


@property (weak, nonatomic) NSObject<HRWDUserActivityResponder> *nextResponder; // ivar: _nextResponder
@property (weak, nonatomic) NSObject<HRWDUserActivityResponder> *responder; // ivar: _responder


-(id)_nextNode;
-(id)changeActivityForResponder:(id)arg0 activityDictionary:(id)arg1 ;
-(id)description;
-(id)initWithResponder:(id)arg0 ;
-(id)transitionActivityForResponder:(id)arg0 newResponder:(id)arg1 transitionDictionary:(id)arg2 ;
-(void)addActivitiesToArray:(id)arg0 currentNode:(id)arg1 ;


@end


#endif