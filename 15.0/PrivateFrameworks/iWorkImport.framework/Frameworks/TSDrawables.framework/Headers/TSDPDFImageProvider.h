// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDPDFIMAGEPROVIDER_H
#define TSDPDFIMAGEPROVIDER_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "TSDImageProvider.h"

@interface TSDPDFImageProvider : TSDImageProvider {
    NSObject<OS_dispatch_queue> *_accessQueue;
    *CGPDFDocument _PDFDocument;
    CGSize _naturalSize;
    NSObject<OS_dispatch_semaphore> *_flushableContentLock;
    BOOL _hasFlushableContent;
}


@property (readonly, nonatomic) *CGPDFDocument CGPDFDocument;
@property (readonly, nonatomic) NSInteger pageAngle;


-(BOOL)i_hasFlushableContent;
-(BOOL)isValid;
-(NSUInteger)i_flushableMemoryEstimate;
-(struct CGPDFDocument *)p_load;
-(struct CGSize )naturalSize;
-(void)dealloc;
-(void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
-(void)flush;
-(void)i_commonInit;
-(void)p_loadIfNecessary;


@end


#endif