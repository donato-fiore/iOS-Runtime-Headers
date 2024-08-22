// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDOMMODIFICATIONCONTEXT_H
#define SXDOMMODIFICATIONCONTEXT_H

@class NSString;
@protocol SXDOMModificationContext;

#import <Foundation/Foundation.h>

#import "SXLayoutOptions.h"

@interface SXDOMModificationContext : NSObject <SXDOMModificationContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SXLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (readonly, nonatomic) NSString *specVersion; // ivar: _specVersion
@property (readonly) Class superclass;


-(id)initWithLayoutOptions:(id)arg0 specVersion:(id)arg1 ;


@end


#endif