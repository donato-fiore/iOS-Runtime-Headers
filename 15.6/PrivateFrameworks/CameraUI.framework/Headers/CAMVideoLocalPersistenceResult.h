// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMVIDEOLOCALPERSISTENCERESULT_H
#define CAMVIDEOLOCALPERSISTENCERESULT_H

@class NSData, NSDate, NSError, NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CAMCaptureCoordinationInfo.h"

@interface CAMVideoLocalPersistenceResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *adjustmentsData; // ivar: _adjustmentsData
@property (readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo; // ivar: _coordinationInfo
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) ? dimensions; // ivar: _dimensions
@property (readonly, nonatomic) ? duration; // ivar: _duration
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSURL *filteredLinkedDestinationURL; // ivar: _filteredLinkedDestinationURL
@property (readonly, copy, nonatomic) NSURL *filteredLocalDestinationURL; // ivar: _filteredLocalDestinationURL
@property (readonly, copy, nonatomic) NSString *filteredVideoPreviewPath; // ivar: _filteredVideoPreviewPath
@property (readonly, copy, nonatomic) NSURL *linkedDestinationURL; // ivar: _linkedDestinationURL
@property (readonly, copy, nonatomic) NSURL *localDestinationURL; // ivar: _localDestinationURL
@property (readonly, copy, nonatomic) NSString *localPersistenceUUID; // ivar: _localPersistenceUUID
@property (readonly, nonatomic) ? stillDisplayTime; // ivar: _stillDisplayTime
@property (readonly, copy, nonatomic) NSString *stillPersistenceUUID; // ivar: _stillPersistenceUUID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 filteredLocalDestinationURL:(id)arg1 linkedURL:(id)arg2 filteredLinkedURL:(id)arg3 videoThumbnailPath:(id)arg4 UUID:(id)arg5 duration:(struct ? )arg6 dimensions:(struct ? )arg7 stillPersistenceUUID:(id)arg8 stillDisplayTime:(struct ? )arg9 creationDate:(id)arg10 adjustmentsData:(id)arg11 coordinationInfo:(id)arg12 error:(id)arg13 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif