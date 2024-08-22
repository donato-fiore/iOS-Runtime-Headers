// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PADAUDITDATAREPOSITORY_H
#define _PADAUDITDATAREPOSITORY_H

@class NSMutableDictionary, NSMutableArray, NSURL, NSString;
@protocol PADAuditDataRepository, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _PADAuditDataRepository : NSObject <PADAuditDataRepository>

 {
    NSMutableDictionary *_facPoseValues;
    NSMutableArray *_taValues;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURL *_dir;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_createDirIfNotExists:(id)arg0 ;
-(id)_extractNestedTimestamps:(id)arg0 ;
-(id)_extractTimestamps:(id)arg0 ;
-(id)init;
-(void)_finalize;
-(void)_setup;
-(void)_storeBuffer:(struct __CVBuffer *)arg0 atURL:(id)arg1 ;
-(void)_storeClassifierResult:(id)arg0 imageData:(id)arg1 signature:(id)arg2 flags:(id)arg3 ;
-(void)_storeFACPoseBuffer:(struct __CVBuffer *)arg0 identifier:(id)arg1 values:(id)arg2 ;
-(void)_storePRDBuffer:(struct __CVBuffer *)arg0 name:(id)arg1 ;
-(void)_storeTAValues:(id)arg0 ;
-(void)_storeUnencryptedVideoFrom:(id)arg0 ;
-(void)dealloc;
-(void)storeClassifierResult:(id)arg0 imageData:(id)arg1 signature:(id)arg2 flags:(id)arg3 ;
-(void)storeFACPoseBuffer:(struct __CVBuffer *)arg0 identifier:(id)arg1 values:(id)arg2 ;
-(void)storePRDBuffer:(struct __CVBuffer *)arg0 name:(id)arg1 ;
-(void)storeTAValues:(id)arg0 ;
-(void)storeUnencryptedVideoFrom:(id)arg0 ;


@end


#endif