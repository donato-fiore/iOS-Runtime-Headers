// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNAUTOCOMPLETEQUERYCACHEMISSAGGDLOGGING_H
#define _CNAUTOCOMPLETEQUERYCACHEMISSAGGDLOGGING_H

@class NSString;
@protocol CNAutocompleteQueryCacheMissLogging;

#import <Foundation/Foundation.h>

#import "CNAutocompleteAggdProbe.h"

@interface _CNAutocompleteQueryCacheMissAggdLogging : NSObject <CNAutocompleteQueryCacheMissLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CNAutocompleteAggdProbe *probe; // ivar: _probe
@property (readonly) Class superclass;


-(id)init;
-(id)initWithProbe:(id)arg0 ;
-(void)didReturnCacheFalseNegatives:(id)arg0 ;
-(void)didReturnCacheFalsePositives:(id)arg0 ;


@end


#endif