// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSDOWNLOADSTATUS_H
#define SSDOWNLOADSTATUS_H

@class NSString, NSError;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SSDownloadPhase.h"

@interface SSDownloadStatus : NSObject <SSXPCCoding, NSCopying>



@property (readonly, nonatomic) SSDownloadPhase *activePhase; // ivar: _activePhase
@property (nonatomic, getter=isContentRestricted) BOOL contentRestricted; // ivar: _contentRestricted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic, getter=isFailed) BOOL failed; // ivar: _failed
@property (readonly, nonatomic, getter=isFailedTransient) BOOL failedTransient;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPausable) BOOL pausable;
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly, nonatomic) float percentComplete;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)setOperationProgress:(id)arg0 ;
-(void)setOperationType:(NSInteger)arg0 ;


@end


#endif