// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXEMBEDCOMPONENTSIZERFACTORY_H
#define SXEMBEDCOMPONENTSIZERFACTORY_H

@class NSString;
@protocol SXComponentSizerFactory, SXDOMObjectProviding, SXEmbedDataProvider;

#import <Foundation/Foundation.h>


@interface SXEmbedComponentSizerFactory : NSObject <SXComponentSizerFactory>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXEmbedDataProvider> *embedDataProvider; // ivar: _embedDataProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(id)initWithDOMObjectProvider:(id)arg0 embedDataProvider:(id)arg1 ;
-(id)sizerForComponent:(id)arg0 componentLayout:(id)arg1 layoutOptions:(id)arg2 DOMObjectProvider:(id)arg3 ;


@end


#endif