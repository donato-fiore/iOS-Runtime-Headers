// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPANORAMACAPTUREREQUEST_H
#define CAMPANORAMACAPTUREREQUEST_H

@protocol NSCopying, NSMutableCopying, CAMPanoramaCaptureRequestDelegate;


#import "CAMCaptureRequest.h"

@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>



@property (readonly, weak, nonatomic) NSObject<CAMPanoramaCaptureRequestDelegate> *delegate; // ivar: _delegate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRequest:(id)arg0 distinctPersistence:(BOOL)arg1 includeAnalytics:(BOOL)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif