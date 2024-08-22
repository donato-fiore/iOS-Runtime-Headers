// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMESSAGEBODYPARSEROBJECT_H
#define MFMESSAGEBODYPARSEROBJECT_H


#import <Foundation/Foundation.h>


@interface MFMessageBodyParserObject : NSObject {
    CGFloat _timeoutTime;
    BOOL _shouldAbort;
    BOOL _didTimeout;
    BOOL _copyBlocks;
}


@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


-(BOOL)areBlocksCopied;
-(BOOL)shouldProceedParsing;
-(void)abortParsing;
-(void)copyBlocks;
-(void)messageBodyParserWillBeginParsing:(id)arg0 ;


@end


#endif