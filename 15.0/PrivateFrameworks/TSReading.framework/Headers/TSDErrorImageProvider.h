// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDERRORIMAGEPROVIDER_H
#define TSDERRORIMAGEPROVIDER_H



#import "TSDImageProvider.h"

@interface TSDErrorImageProvider : TSDImageProvider



+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedInstance;
-(BOOL)isError;
-(BOOL)isValid;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)retain;
-(struct CGPDFDocument *)p_iconPDFDocument;
-(struct CGSize )naturalSize;
-(void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
-(void)release;


@end


#endif