// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKRECORDOBSERVER_H
#define CKRECORDOBSERVER_H

@class NSString;
@protocol NSCopying, CKRecordObservable;

#import <Foundation/Foundation.h>

#import "CKContainerSetupInfo.h"

@interface CKRecordObserver : NSObject <NSCopying>



@property (readonly, copy, nonatomic) CKContainerSetupInfo *containerInfo; // ivar: _containerInfo
@property (readonly, nonatomic) NSObject<CKRecordObservable> *provider; // ivar: _provider
@property (readonly, copy, nonatomic) NSString *recordType; // ivar: _recordType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithContainer:(id)arg0 recordType:(id)arg1 ;
-(id)initWithContainerInfo:(id)arg0 recordType:(id)arg1 provider:(id)arg2 ;
-(void)invalidate;
-(void)registerWithBlock:(id)arg0 ;


@end


#endif