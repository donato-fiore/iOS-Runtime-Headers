// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSCMSTIMESTAMPATTRIBUTE_H
#define MSCMSTIMESTAMPATTRIBUTE_H

@class NSArray, NSURL, NSDate;
@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>

#import "MSOID.h"
#import "MSCMSSignerInfo.h"

@interface MSCMSTimestampAttribute : NSObject <MSCMSAttributeCoder>



@property BOOL certChainRequested; // ivar: _certChainRequested
@property (readonly) NSArray *certificates; // ivar: _certificates
@property (readonly) MSOID *digestAlgorithm; // ivar: _digestAlgorithm
@property (retain) NSURL *serverURL; // ivar: _serverURL
@property (readonly) MSCMSSignerInfo *singerInfo; // ivar: _singerInfo
@property (readonly) NSDate *timestampTime; // ivar: _timestampTime


-(BOOL)verifyTimestamps:(*id)arg0 ;
-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;
-(id)initWithServerURL:(id)arg0 ;
-(id)initWithServerURL:(id)arg0 chainRequested:(BOOL)arg1 ;
-(id)initWithTimestampToken:(id)arg0 ;


@end


#endif