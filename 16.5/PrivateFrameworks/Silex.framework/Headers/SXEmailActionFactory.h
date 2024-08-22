// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXEMAILACTIONFACTORY_H
#define SXEMAILACTIONFACTORY_H

@class NSString;
@protocol SXActionFactory;

#import <Foundation/Foundation.h>


@interface SXEmailActionFactory : NSObject <SXActionFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)actionForAddition:(id)arg0 ;
-(id)actionForURL:(id)arg0 ;


@end


#endif