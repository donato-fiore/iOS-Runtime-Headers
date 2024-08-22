// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNDIAGNOSTICRESPONSEPREPARER_H
#define _CNDIAGNOSTICRESPONSEPREPARER_H

@class CNAutocompleteResponsePreparerDecorator;
@protocol CNFuture;



@interface _CNDiagnosticResponsePreparer : CNAutocompleteResponsePreparerDecorator

@property (readonly) NSObject<CNFuture> *logFuture; // ivar: _logFuture


-(id)initWithResponsePreparer:(id)arg0 delegate:(id)arg1 log:(id)arg2 ;
-(id)prepareResults:(id)arg0 ;


@end


#endif