// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSUBJECTGROUPRESULT_H
#define CAMSUBJECTGROUPRESULT_H

@class NSString, NSArray, AVMetadataObject;
@protocol CAMMetadataObjectResult;

#import <Foundation/Foundation.h>


@interface CAMSubjectGroupResult : NSObject <CAMMetadataObjectResult>



@property (nonatomic) NSInteger _groupID; // ivar: __groupID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *metadataObjects; // ivar: _metadataObjects
@property (readonly, copy, nonatomic) NSString *metadataType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger syntheticFocusMode;
@property (readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)initWithMetadataObjects:(id)arg0 groupID:(NSInteger)arg1 ;


@end


#endif