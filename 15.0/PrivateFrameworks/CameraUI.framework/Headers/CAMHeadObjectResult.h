// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMHEADOBJECTRESULT_H
#define CAMHEADOBJECTRESULT_H

@class AVMetadataObject, NSString;
@protocol CAMMetadataObjectResult;

#import <Foundation/Foundation.h>


@interface CAMHeadObjectResult : NSObject <CAMMetadataObjectResult>



@property (retain, nonatomic) AVMetadataObject *_metadataHeadObject; // ivar: __metadataHeadObject
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *metadataType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger syntheticFocusMode;
@property (readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)initWithHeadObject:(id)arg0 ;


@end


#endif