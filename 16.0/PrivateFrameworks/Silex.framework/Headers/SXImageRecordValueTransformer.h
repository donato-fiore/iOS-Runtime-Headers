// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXIMAGERECORDVALUETRANSFORMER_H
#define SXIMAGERECORDVALUETRANSFORMER_H

@class NSString;
@protocol SXDataRecordValueTransformer, SXDOMObjectProviding;

#import <Foundation/Foundation.h>


@interface SXImageRecordValueTransformer : NSObject <SXDataRecordValueTransformer>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDOMObjectProvider:(id)arg0 ;
-(id)transformValueForRecord:(id)arg0 descriptor:(id)arg1 ;


@end


#endif