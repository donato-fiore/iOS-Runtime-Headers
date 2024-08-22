// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMPMEDIALIBRARYCONNECTOPERATION_H
#define VUIMPMEDIALIBRARYCONNECTOPERATION_H

@class VUIAsynchronousOperation, NSError, MPMediaLibrary;
@protocol OS_dispatch_source;



@interface VUIMPMediaLibraryConnectOperation : VUIAsynchronousOperation

@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (retain, nonatomic) NSObject<OS_dispatch_source> *progressTimer; // ivar: _progressTimer
@property (nonatomic) BOOL success; // ivar: _success


-(id)init;
-(id)initWithMediaLibrary:(id)arg0 ;
-(void)_notifyClientOfProgress:(float)arg0 ;
-(void)_startProgressTimer;
-(void)_stopProgressTimer;
-(void)executionDidBegin;


@end


#endif