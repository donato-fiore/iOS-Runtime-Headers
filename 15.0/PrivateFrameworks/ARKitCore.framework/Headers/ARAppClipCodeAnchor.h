// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARAPPCLIPCODEANCHOR_H
#define ARAPPCLIPCODEANCHOR_H

@class NSString, NSNumber, NSURL;
@protocol ARTrackable;


#import "ARAnchor.h"

@interface ARAppClipCodeAnchor : ARAnchor <ARTrackable>



@property (nonatomic) float confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *instanceID; // ivar: _instanceID
@property (nonatomic) BOOL isScaleReliable; // ivar: _isScaleReliable
@property (nonatomic) BOOL isTracked; // ivar: _isTracked
@property (nonatomic) float radius; // ivar: _radius
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) NSInteger urlDecodingState;
@property (nonatomic) NSInteger urlDecodingStateInternal; // ivar: _urlDecodingStateInternal
@property (nonatomic) NSUInteger urlEncodingVersion; // ivar: _urlEncodingVersion


+(BOOL)supportsSecureCoding;
-(id)copyWithAppClipCodeResult:(id)arg0 isTracked:(BOOL)arg1 ;
-(id)copyWithIsTracked:(BOOL)arg0 ;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithAppClipCodeResult:(id)arg0 instanceID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif