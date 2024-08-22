// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDATATABLECOMPONENTSIZERFACTORY_H
#define SXDATATABLECOMPONENTSIZERFACTORY_H

@class NSString;
@protocol SXComponentSizerFactory, SXDOMObjectProviding, SXDataRecordValueTransformerFactory, SXTextComponentLayoutHosting, SXDataTableTextSourceFactory;

#import <Foundation/Foundation.h>


@interface SXDataTableComponentSizerFactory : NSObject <SXComponentSizerFactory>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXDataRecordValueTransformerFactory> *recordValueTransformerFactory; // ivar: _recordValueTransformerFactory
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXTextComponentLayoutHosting> *textComponentLayoutHosting; // ivar: _textComponentLayoutHosting
@property (readonly, nonatomic) NSObject<SXDataTableTextSourceFactory> *textSourceFactory; // ivar: _textSourceFactory
@property (readonly, nonatomic) NSString *type;


-(id)initWithDOMObjectProvider:(id)arg0 textComponentLayoutHosting:(id)arg1 textSourceFactory:(id)arg2 recordValueTransformerFactory:(id)arg3 ;
-(id)sizerForComponent:(id)arg0 componentLayout:(id)arg1 layoutOptions:(id)arg2 DOMObjectProvider:(id)arg3 ;


@end


#endif