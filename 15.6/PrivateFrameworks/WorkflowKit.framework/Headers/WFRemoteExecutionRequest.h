// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMOTEEXECUTIONREQUEST_H
#define WFREMOTEEXECUTIONREQUEST_H

@class NSString;
@protocol WFPBCodable;

#import <Foundation/Foundation.h>


@interface WFRemoteExecutionRequest : NSObject <WFPBCodable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)isUnsupportedVersionError:(id)arg0 ;
+(BOOL)supportsVersion:(NSInteger)arg0 ;
+(id)identifierFromData:(id)arg0 error:(*id)arg1 ;
+(id)unsupportedVersionError;
-(BOOL)readFrom:(id)arg0 error:(*id)arg1 ;
-(BOOL)readMessageFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeTo:(id)arg0 error:(*id)arg1 ;
-(id)emptyProtobufError;
-(id)init;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)writeMessageToWriter:(id)arg0 error:(*id)arg1 ;


@end


#endif