// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTTAPCONFIG_H
#define DTTAPCONFIG_H

@class NSMutableDictionary, NSString;
@protocol NSCopying, DTTapBulkDataReceiver;

#import <Foundation/Foundation.h>


@interface DTTapConfig : NSObject <NSCopying>

 {
    NSMutableDictionary *_dict;
}


@property (nonatomic) NSUInteger bufferMode;
@property (nonatomic) NSObject<DTTapBulkDataReceiver> *bulkDataReceiver; // ivar: _bulkDataReceiver
@property (nonatomic) BOOL discardHeartbeatsWhenPossible;
@property (nonatomic) BOOL filePreservation; // ivar: _filePreservation
@property (readonly, nonatomic) BOOL isDeferredDisplay;
@property (nonatomic) NSUInteger pollingInterval;
@property (copy, nonatomic) id *recordingInfoHandler; // ivar: _recordingInfoHandler
@property (copy, nonatomic) id *runningMetadataChangedHandler; // ivar: _runningMetadataChangedHandler
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic) NSInteger serviceVersion; // ivar: _serviceVersion
@property (copy, nonatomic) id *statusHandler; // ivar: _statusHandler
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid
@property (nonatomic) NSUInteger windowSize;


-(BOOL)spoolToDiskWhenPossible;
-(id)_getSerializableObjectForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithPlist:(id)arg0 ;
-(id)plist;
-(void)_dispatchStatus:(unsigned int)arg0 timestamp:(NSUInteger)arg1 notice:(id)arg2 info:(id)arg3 ;
-(void)_removeSerializableObjectForKey:(id)arg0 ;
-(void)_runningMetadataChanged:(id)arg0 ;
-(void)_setSerializableObject:(id)arg0 forKey:(id)arg1 ;
-(void)refreshUUID;
-(void)setSpoolToDiskWhenPossible:(BOOL)arg0 ;


@end


#endif