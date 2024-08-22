// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLIBRARYSERVICESOPERATION_H
#define PLLIBRARYSERVICESOPERATION_H

@class NSBlockOperation, NSString, NSProgress;



@interface PLLibraryServicesOperation : NSBlockOperation {
    os_unfair_lock_s _cancellationLock;
    BOOL _cancellationBlockCalled;
}


@property (copy, nonatomic) id *cancellationBlock; // ivar: _cancellationBlock
@property (copy) NSString *logPrefix; // ivar: _logPrefix
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (nonatomic) NSInteger progressPercentOfTotal; // ivar: _progressPercentOfTotal
@property (nonatomic) NSInteger requiredState; // ivar: _requiredState


+(BOOL)shouldSuppressLogging;
+(id)operationWithName:(id)arg0 requiredState:(NSInteger)arg1 parentProgress:(id)arg2 execution:(id)arg3 ;
+(void)setShouldSuppressLogging:(BOOL)arg0 ;
-(id)debugDescription;
-(id)init;
-(void)_runOperationBlock:(id)arg0 ;
-(void)_safeRemoveCancellationObserver;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setExecutionBlockFromOperationBlock:(id)arg0 ;


@end


#endif