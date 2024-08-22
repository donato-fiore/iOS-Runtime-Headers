// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASTTESTRESULT_H
#define ASTTESTRESULT_H

@class NSNumber, NSDictionary, NSArray;


#import "ASTSealablePayload.h"
#import "ASTUploadFilesResult.h"

@interface ASTTestResult : ASTSealablePayload

@property (retain, nonatomic) NSNumber *allowCellularSizeThreshold; // ivar: _allowCellularSizeThreshold
@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (retain, nonatomic) NSArray *files; // ivar: _files
@property (retain, nonatomic) NSDictionary *predicates; // ivar: _predicates
@property (retain, nonatomic) NSNumber *statusCode; // ivar: _statusCode
@property (nonatomic) CGFloat testDuration; // ivar: _testDuration
@property (readonly, nonatomic) NSNumber *testId; // ivar: _testId
@property (retain, nonatomic) ASTUploadFilesResult *uploadFiles; // ivar: _uploadFiles


+(id)resultWithTestId:(id)arg0 parameters:(id)arg1 ;
// -(BOOL)sealWithFileSigner:(id)arg0 error:(unk)arg1  ;
-(id)generatePayload;
-(id)init;
-(id)initWithTestId:(id)arg0 parameters:(id)arg1 ;
-(void)sealWithPayload:(id)arg0 signature:(id)arg1 ;
-(void)sealWithSealableFiles:(id)arg0 ;
-(void)setUploadStatusFromSource:(id)arg0 withArray:(id)arg1 ;


@end


#endif