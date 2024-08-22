// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUTFILECOPIER_H
#define CUTFILECOPIER_H

@class NSURL;
@protocol CUTFileCopierDelegate;

#import <Foundation/Foundation.h>


@interface CUTFileCopier : NSObject

@property *void _BOMCopier; // ivar: _BOMCopier
@property (weak) NSObject<CUTFileCopierDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL didErrorOccur; // ivar: _didErrorOccur
@property (readonly) id *identifier; // ivar: _identifier
@property BOOL inProgress; // ivar: _inProgress
@property (readonly, copy) NSURL *inputURL; // ivar: _inputURL
@property unsigned int operation; // ivar: _operation
@property (readonly, copy) NSURL *outputURL; // ivar: _outputURL
@property (readonly, nonatomic) BOOL wasCancelled; // ivar: _shouldCancel


-(id)_temporaryCopierPath;
-(id)initWithInputURL:(id)arg0 outputURL:(id)arg1 identifier:(id)arg2 operation:(unsigned int)arg3 delegate:(id)arg4 ;
-(void)_fillOutputURLFromInputURL;
-(void)_main_copierFinishedWithResult:(id)arg0 ;
-(void)_worker_doCopy;
-(void)cancel;
-(void)cleanup;
-(void)dealloc;
-(void)start;


@end


#endif