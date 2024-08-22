// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHSAMPLEQUERYCONTROLLER_H
#define PXSEARCHSAMPLEQUERYCONTROLLER_H

@class NSString;
@protocol PXSearchQueryControllerProtocol;

#import <Foundation/Foundation.h>


@interface PXSearchSampleQueryController : NSObject <PXSearchQueryControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *sampleResultsHandler; // ivar: _sampleResultsHandler
@property (readonly) Class superclass;


-(id)initWithResultsHandler:(id)arg0 ;
-(void)performSearch:(id)arg0 ;


@end


#endif