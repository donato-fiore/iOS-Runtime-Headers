// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFEEDTRANSFORMATIONCOMPOSITE_H
#define FCFEEDTRANSFORMATIONCOMPOSITE_H

@class NSString, NSArray, NSMutableArray;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationComposite : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *feedTransformations; // ivar: _feedTransformations
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldLogTransformationResults; // ivar: _shouldLogTransformationResults
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *transformationLogs; // ivar: _transformationLogs


-(id)init;
-(id)initWithFeedTransformations:(id)arg0 ;
-(id)initWithFeedTransformations:(id)arg0 logTransformationResults:(BOOL)arg1 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif