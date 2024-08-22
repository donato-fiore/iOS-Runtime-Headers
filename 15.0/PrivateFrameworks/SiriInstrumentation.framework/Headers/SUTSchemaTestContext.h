// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUTSCHEMATESTCONTEXT_H
#define SUTSCHEMATESTCONTEXT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SUTSchemaTestSessionInfo.h"

@interface SUTSchemaTestContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasTestName; // ivar: _hasTestName
@property (nonatomic) BOOL hasTestSessionInfo; // ivar: _hasTestSessionInfo
@property (nonatomic) BOOL hasTestType;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *testName; // ivar: _testName
@property (retain, nonatomic) SUTSchemaTestSessionInfo *testSessionInfo; // ivar: _testSessionInfo
@property (nonatomic) int testType; // ivar: _testType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif