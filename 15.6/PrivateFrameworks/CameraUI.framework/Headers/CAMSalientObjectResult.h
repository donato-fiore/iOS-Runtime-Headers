// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMSALIENTOBJECTRESULT_H
#define CAMSALIENTOBJECTRESULT_H

@class AVMetadataSalientObject, NSString, AVMetadataObject;
@protocol CAMMetadataObjectResult;

#import <Foundation/Foundation.h>


@interface CAMSalientObjectResult : NSObject <CAMMetadataObjectResult>



@property (retain, nonatomic) AVMetadataSalientObject *_salientObject; // ivar: __salientObject
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *metadataType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger syntheticFocusMode;
@property (readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)initWithSalientObject:(id)arg0 ;


@end


#endif