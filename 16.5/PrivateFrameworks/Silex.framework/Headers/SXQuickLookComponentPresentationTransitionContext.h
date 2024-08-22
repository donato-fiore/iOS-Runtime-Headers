// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXQUICKLOOKCOMPONENTPRESENTATIONTRANSITIONCONTEXT_H
#define SXQUICKLOOKCOMPONENTPRESENTATIONTRANSITIONCONTEXT_H

@class NSString;
@protocol NFStateMachineContextType;

#import <Foundation/Foundation.h>

#import "SXQuickLookFile.h"

@interface SXQuickLookComponentPresentationTransitionContext : NSObject <NFStateMachineContextType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXQuickLookFile *file; // ivar: _file
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFile:(id)arg0 ;


@end


#endif