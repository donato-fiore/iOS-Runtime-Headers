// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPERSISTENCERESPONSE_H
#define CAMPERSISTENCERESPONSE_H

@class NSDate, NSURL, NSString, UIImage;

#import <Foundation/Foundation.h>

#import "CAMCaptureCoordinationInfo.h"

@interface CAMPersistenceResponse : NSObject

@property (readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo; // ivar: _coordinationInfo
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSURL *persistenceURL; // ivar: _persistenceURL
@property (readonly, copy, nonatomic) NSString *persistenceUUID; // ivar: _persistenceUUID
@property (readonly, nonatomic) CGSize pixelSize; // ivar: _pixelSize
@property (readonly, copy, nonatomic) UIImage *scrubberImage; // ivar: _scrubberImage
@property (readonly, nonatomic) unsigned short sessionIdentifier; // ivar: _sessionIdentifier


-(id)description;
-(id)initWithUUID:(id)arg0 captureSession:(unsigned short)arg1 url:(id)arg2 creationDate:(id)arg3 scrubberImage:(id)arg4 pixelSize:(struct CGSize )arg5 coordinationInfo:(id)arg6 ;


@end


#endif