// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFPDDATABUFFER_H
#define CFPDDATABUFFER_H


#import <Foundation/Foundation.h>


@interface CFPDDataBuffer : NSObject



+(id)newBufferFromCFData:(struct __CFData *)arg0 ;
+(id)newBufferFromFile:(int)arg0 allowMappingIfSafe:(BOOL)arg1 ;
+(id)newBufferFromPropertyList:(*void)arg0 ;
-(*void)bytes;
-(*void)copyPropertyListWithMutability:(NSUInteger)arg0 error:(struct __CFError **)arg1 ;
-(BOOL)beginAccessing;
-(BOOL)purgable;
-(BOOL)validatePlist;
-(NSUInteger)length;
-(id)copyXPCData;
-(struct __CFData *)copyCFData;
-(void)endAccessing;
-(void)quicklyValidatePlistAndOnFailureInvokeBlock:(id)arg0 ;


@end


#endif