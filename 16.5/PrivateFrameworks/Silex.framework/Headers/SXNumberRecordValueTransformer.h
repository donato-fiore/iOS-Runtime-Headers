// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXNUMBERRECORDVALUETRANSFORMER_H
#define SXNUMBERRECORDVALUETRANSFORMER_H

@class NSString;
@protocol SXDataRecordValueTransformer;

#import <Foundation/Foundation.h>


@interface SXNumberRecordValueTransformer : NSObject <SXDataRecordValueTransformer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)transformValueForRecord:(id)arg0 descriptor:(id)arg1 ;


@end


#endif