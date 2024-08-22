// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFACESUPPORTNOTIFICATIONACTIONEVENTRECORDER_H
#define NTKFACESUPPORTNOTIFICATIONACTIONEVENTRECORDER_H

@class NSString, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKFaceSupportDateDatabase.h"

@interface NTKFaceSupportNotificationActionEventRecorder : NSObject

@property (readonly, nonatomic) NTKFaceSupportDateDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSMapTable *lookup; // ivar: _lookup
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)_validateIdentifier:(id)arg0 ;
-(id)initWithFilePath:(id)arg0 ;
-(void)_queue_beginPresentationForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_queue_endPresentationForIdentifier:(id)arg0 withAction:(NSInteger)arg1 completion:(id)arg2 ;
-(void)beginPresentationForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)endPresentationForIdentifier:(id)arg0 withAction:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif