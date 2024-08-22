// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3DATABASEOPERATION_H
#define ML3DATABASEOPERATION_H

@class NSOperation, NSDictionary, NSError;


#import "ML3MediaLibraryWriter.h"
#import "ML3ActiveTransaction.h"
#import "ML3MusicLibrary.h"
#import "ML3Client.h"

@interface ML3DatabaseOperation : NSOperation {
    ML3MediaLibraryWriter *_writer;
    ML3ActiveTransaction *_transaction;
    BOOL _beganNewTransaction;
}


@property (copy, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) ML3MusicLibrary *library; // ivar: _library
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (retain, nonatomic) ML3Client *originatingClient; // ivar: _originatingClient
@property (readonly, nonatomic) BOOL success; // ivar: _success
@property (readonly, nonatomic) ML3ActiveTransaction *transaction;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)databaseOperationForType:(NSUInteger)arg0 withLibrary:(id)arg1 writer:(id)arg2 ;
-(BOOL)_execute:(*id)arg0 ;
-(BOOL)_verifyLibraryConnectionAndAttributesProperties:(*id)arg0 ;
-(id)_operationTypeDescription;
-(id)description;
-(id)initWithLibrary:(id)arg0 writer:(id)arg1 ;
-(void)main;


@end


#endif