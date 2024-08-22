// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXURLACTIONFACTORY_H
#define SXURLACTIONFACTORY_H

@class NSString;
@protocol SXURLActionFactory;

#import <Foundation/Foundation.h>


@interface SXURLActionFactory : NSObject <SXURLActionFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)actionForURL:(id)arg0 ;
-(id)actionForURL:(id)arg0 analytics:(id)arg1 ;


@end


#endif