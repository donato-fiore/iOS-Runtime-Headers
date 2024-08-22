// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREUPDATEPARAM_H
#define SUCOREUPDATEPARAM_H

@class SUCoreProgress, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SUCorePolicy.h"

@interface SUCoreUpdateParam : NSObject <NSSecureCoding>



@property (retain, nonatomic) SUCoreProgress *downloadProgress; // ivar: _downloadProgress
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) SUCorePolicy *policy; // ivar: _policy
@property (retain, nonatomic) SUCoreProgress *prepareProgress; // ivar: _prepareProgress
@property (nonatomic) NSInteger resultCode; // ivar: _resultCode
@property (nonatomic) NSInteger targetPhase; // ivar: _targetPhase


+(BOOL)supportsSecureCoding;
+(id)targetPhaseName:(NSInteger)arg0 ;
-(id)copy;
-(id)description;
-(id)init;
-(id)initTargetPhase:(NSInteger)arg0 policy:(id)arg1 downloadProgress:(id)arg2 prepareProgress:(id)arg3 resultCode:(NSInteger)arg4 error:(id)arg5 ;
-(id)initTargetPhase:(NSInteger)arg0 withPolicy:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDownloadProgress:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithPrepareProgress:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif