// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDATARECORDVALUETRANSFORMERFACTORY_H
#define SXDATARECORDVALUETRANSFORMERFACTORY_H

@class NSString;
@protocol SXDataRecordValueTransformerFactory, SXDOMObjectProviding;

#import <Foundation/Foundation.h>


@interface SXDataRecordValueTransformerFactory : NSObject <SXDataRecordValueTransformerFactory>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDOMObjectProvider:(id)arg0 ;
-(id)recordValueTransformerForDataDescriptor:(id)arg0 ;


@end


#endif