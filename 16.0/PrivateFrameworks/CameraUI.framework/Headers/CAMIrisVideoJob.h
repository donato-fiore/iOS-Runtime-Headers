// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMIRISVIDEOJOB_H
#define CAMIRISVIDEOJOB_H

@class NSString, NSError, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CAMIrisVideoJob : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isCTMVideo) BOOL CTMVideo;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSInteger captureDevice; // ivar: _captureDevice
@property (readonly, nonatomic) NSError *captureError; // ivar: _captureError
@property (readonly, nonatomic) NSInteger captureOrientation; // ivar: _captureOrientation
@property (readonly, nonatomic) CGFloat captureTime; // ivar: _captureTime
@property (readonly, nonatomic) ? duration; // ivar: _duration
@property (readonly, nonatomic) NSString *filterName; // ivar: _filterName
@property (readonly, nonatomic) NSURL *filteredVideoURL; // ivar: _filteredVideoURL
@property (readonly, nonatomic) NSString *irisIdentifier; // ivar: _irisIdentifier
@property (nonatomic) NSInteger persistenceOptions; // ivar: _persistenceOptions
@property (readonly, nonatomic) ? stillImageDisplayTime; // ivar: _stillImageDisplayTime
@property (readonly, nonatomic) NSString *stillImagePersistenceUUID; // ivar: _stillImagePersistenceUUID
@property (nonatomic) NSInteger temporaryPersistenceOptions; // ivar: _temporaryPersistenceOptions
@property (readonly, nonatomic) NSString *videoPersistenceUUID; // ivar: _videoPersistenceUUID
@property (readonly, nonatomic) NSURL *videoURL; // ivar: _videoURL


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideoURL:(id)arg0 stillImagePersistenceUUID:(id)arg1 videoPersistenceUUID:(id)arg2 irisIdentifier:(id)arg3 captureDevice:(NSInteger)arg4 captureOrientation:(NSInteger)arg5 duration:(struct ? )arg6 stillImageDisplayTime:(struct ? )arg7 captureTime:(CGFloat)arg8 captureError:(id)arg9 filterName:(id)arg10 filteredVideoURL:(id)arg11 persistenceOptions:(NSInteger)arg12 temporaryPersistenceOptions:(NSInteger)arg13 bundleIdentifier:(id)arg14 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif