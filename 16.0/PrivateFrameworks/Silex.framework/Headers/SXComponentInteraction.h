// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTINTERACTION_H
#define SXCOMPONENTINTERACTION_H

@protocol SXComponentInteractionHandler;

#import <Foundation/Foundation.h>

#import "SXComponentView.h"

@interface SXComponentInteraction : NSObject

@property (readonly, weak, nonatomic) SXComponentView *componentView; // ivar: _componentView
@property (readonly, nonatomic) NSObject<SXComponentInteractionHandler> *handler; // ivar: _handler
@property (readonly, nonatomic) NSUInteger types; // ivar: _types


-(BOOL)handlesType:(NSUInteger)arg0 ;
-(id)initWithComponentView:(id)arg0 handler:(id)arg1 types:(NSUInteger)arg2 ;


@end


#endif