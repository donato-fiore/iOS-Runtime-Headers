// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILEHANDLEMAINTAINER_H
#define NEFILEHANDLEMAINTAINER_H

@class NSMutableArray, NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface NEFileHandleMaintainer : NSObject {
    BOOL _changed;
    BOOL _isOwnerMode;
    NSMutableArray *_fileHandles;
    id *_receivedHandlesCallback;
    NSObject<OS_xpc_object> *_auxiliaryDataDictionary;
}


@property (retain) NSString *eventName; // ivar: _eventName


+(id)sharedMaintainer;
-(id)copyAuxiliaryDataForKey:(id)arg0 ;
-(id)createEvent;
-(id)init;
-(void)commit;
-(void)iterateFileHandlesWithBlock:(id)arg0 ;
-(void)removeFileHandleMatchingPredicate:(id)arg0 ;
-(void)resetFileHandlesFromEvent:(id)arg0 ;
-(void)setAuxiliaryData:(id)arg0 forKey:(id)arg1 ;
-(void)setFileHandle:(id)arg0 matchingPredicate:(id)arg1 ;
-(void)startOwnerModeWithEventName:(id)arg0 handlesReceivedCallback:(id)arg1 ;


@end


#endif