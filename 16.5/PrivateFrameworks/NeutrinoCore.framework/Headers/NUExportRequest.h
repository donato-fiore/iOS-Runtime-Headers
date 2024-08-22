// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUEXPORTREQUEST_H
#define NUEXPORTREQUEST_H

@class NSURL;
@protocol NUScalePolicy;


#import "NURenderRequest.h"

@interface NUExportRequest : NURenderRequest

@property (copy) NSURL *destinationURL; // ivar: _destinationURL
@property (retain) NSObject<NUScalePolicy> *scalePolicy; // ivar: _scalePolicy


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)initWithComposition:(id)arg0 destinationURL:(id)arg1 ;


@end


#endif