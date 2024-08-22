// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXISSUECOVERCOMPONENTSIZERFACTORY_H
#define SXISSUECOVERCOMPONENTSIZERFACTORY_H

@class NSString;
@protocol SXComponentSizerFactory, SXIssueCoverLayoutAttributesFactory;

#import <Foundation/Foundation.h>


@interface SXIssueCoverComponentSizerFactory : NSObject <SXComponentSizerFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXIssueCoverLayoutAttributesFactory> *layoutOptionsFactory; // ivar: _layoutOptionsFactory
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(id)initWithLayoutAttributesFactory:(id)arg0 ;
-(id)sizerForComponent:(id)arg0 componentLayout:(id)arg1 layoutOptions:(id)arg2 DOMObjectProvider:(id)arg3 ;


@end


#endif