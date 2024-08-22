// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILEHANDLEMAINTAINER_H
#define NEFILEHANDLEMAINTAINER_H

@class NSString, NSMutableArray;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface NEFileHandleMaintainer : NSObject

@property (retain) NSObject<OS_xpc_object> *auxiliaryDataDictionary; // ivar: _auxiliaryDataDictionary
@property BOOL changed; // ivar: _changed
@property (retain) NSString *eventName; // ivar: _eventName
@property (retain) NSMutableArray *fileHandles; // ivar: _fileHandles
@property BOOL isOwnerMode; // ivar: _isOwnerMode
@property (copy) id *receivedHandlesCallback; // ivar: _receivedHandlesCallback


+(id)sharedMaintainer;
-(id)copyAuxiliaryDataForKey:(id)arg0 ;
-(id)createEvent;
-(id)init;
-(void)commit;
-(void)iterateFileHandlesWithBlock:(id)arg0 ;
-(void)removeFileHandleMatchingPredicate:(id)arg0 ;
-(void)setAuxiliaryData:(id)arg0 forKey:(id)arg1 ;
-(void)setFileHandle:(id)arg0 matchingPredicate:(id)arg1 ;
-(void)startOwnerModeWithEventName:(id)arg0 handlesReceivedCallback:(id)arg1 ;


@end


#endif