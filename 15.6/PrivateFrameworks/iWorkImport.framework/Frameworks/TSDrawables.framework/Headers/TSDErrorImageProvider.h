// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDERRORIMAGEPROVIDER_H
#define TSDERRORIMAGEPROVIDER_H



#import "TSDImageProvider.h"

@interface TSDErrorImageProvider : TSDImageProvider



+(id)sharedInstance;
-(BOOL)isError;
-(BOOL)isValid;
-(struct CGPDFDocument *)p_iconPDFDocument;
-(struct CGSize )naturalSize;
-(void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;


@end


#endif