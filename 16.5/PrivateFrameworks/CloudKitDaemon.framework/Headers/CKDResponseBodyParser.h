// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDRESPONSEBODYPARSER_H
#define CKDRESPONSEBODYPARSER_H

@class NSMutableData, NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDResponseBodyParser : NSObject {
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSMutableData *_parserData;
}


@property (copy, nonatomic) id *objectParsedBlock; // ivar: _objectParsedBlock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *parseQueue;
@property (retain, nonatomic) NSMutableData *parserData;
@property (retain, nonatomic) NSError *parserError; // ivar: _parserError
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (nonatomic) BOOL testRepeatedParseResults; // ivar: _testRepeatedParseResults


-(id)initWithQoS:(NSInteger)arg0 ;
-(void)finishWithCompletion:(id)arg0 ;
-(void)processData:(id)arg0 ;


@end


#endif