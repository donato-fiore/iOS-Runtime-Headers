// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECMESSAGEBODYPARSEROBJECT_H
#define ECMESSAGEBODYPARSEROBJECT_H


#import <Foundation/Foundation.h>


@interface ECMessageBodyParserObject : NSObject {
    CGFloat _timeoutTime;
    BOOL _shouldAbort;
    BOOL _didTimeout;
}


@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


-(BOOL)shouldProceedParsing;
-(void)abortParsing;
-(void)messageBodyParserWillBeginParsing:(id)arg0 ;


@end


#endif