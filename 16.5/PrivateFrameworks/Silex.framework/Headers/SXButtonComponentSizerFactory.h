// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXBUTTONCOMPONENTSIZERFACTORY_H
#define SXBUTTONCOMPONENTSIZERFACTORY_H

@class NSString;
@protocol SXComponentSizerFactory, SXTextComponentLayoutHosting, SXButtonComponentTextProvider, SXTextSourceFactory;

#import <Foundation/Foundation.h>


@interface SXButtonComponentSizerFactory : NSObject <SXComponentSizerFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SXTextComponentLayoutHosting> *textComponentLayoutHosting; // ivar: _textComponentLayoutHosting
@property (readonly, nonatomic) NSObject<SXButtonComponentTextProvider> *textProvider; // ivar: _textProvider
@property (readonly, nonatomic) NSObject<SXTextSourceFactory> *textSourceFactory; // ivar: _textSourceFactory
@property (readonly, nonatomic) NSString *type;


-(id)initWithTextProvider:(id)arg0 textSourceFactory:(id)arg1 ;
-(id)sizerForComponent:(id)arg0 componentLayout:(id)arg1 layoutOptions:(id)arg2 DOMObjectProvider:(id)arg3 ;


@end


#endif