// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASTRESPONSE_H
#define ASTRESPONSE_H

@class NSString, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface ASTResponse : NSObject

@property (readonly, nonatomic) NSInteger command; // ivar: _command
@property (retain, nonatomic) NSString *commandString; // ivar: _commandString
@property (readonly, nonatomic) NSDictionary *data; // ivar: _data
@property (readonly, nonatomic) NSNumber *progress; // ivar: _progress
@property (retain, nonatomic) NSDictionary *stringToCommand; // ivar: _stringToCommand
@property (readonly, nonatomic) NSNumber *testId; // ivar: _testId


+(id)responseWithDictionary:(id)arg0 ;
+(id)stringFromCommand:(NSInteger)arg0 ;
-(BOOL)validateResponse:(id)arg0 key:(id)arg1 expectedClass:(Class)arg2 ;
-(BOOL)validateTestId:(id)arg0 command:(NSInteger)arg1 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)validateData:(id)arg0 command:(NSInteger)arg1 ;


@end


#endif