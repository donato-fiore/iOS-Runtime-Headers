// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSRECORDCONTROLLER_H
#define TPSRECORDCONTROLLER_H

@class NSString;
@protocol _TPSXPCExportable;

#import <Foundation/Foundation.h>

#import "TPSRecordDataProvider.h"
#import "_TPSXPCConnection.h"

@interface TPSRecordController : NSObject <_TPSXPCExportable>



@property (weak, nonatomic) TPSRecordDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _TPSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedInstance;
-(id)exportedInterface;
-(id)recordQueue;
-(id)remoteInterface;
-(void)_destroyXPCConnection;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)persistRecord:(id)arg0 ;
-(void)persistRecords:(id)arg0 ;
-(void)persistRecordsFromTipsd:(id)arg0 ;


@end


#endif