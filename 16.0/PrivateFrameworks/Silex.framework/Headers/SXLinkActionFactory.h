// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXLINKACTIONFACTORY_H
#define SXLINKACTIONFACTORY_H

@class NSString;
@protocol SXActionFactory, SXURLActionFactory;

#import <Foundation/Foundation.h>


@interface SXLinkActionFactory : NSObject <SXActionFactory>



@property (readonly, nonatomic) NSObject<SXURLActionFactory> *URLActionFactory; // ivar: _URLActionFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)actionForAddition:(id)arg0 ;
-(id)actionForURL:(id)arg0 ;
-(id)initWithURLActionFactory:(id)arg0 ;


@end


#endif