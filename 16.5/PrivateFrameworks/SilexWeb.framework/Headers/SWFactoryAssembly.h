// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWFACTORYASSEMBLY_H
#define SWFACTORYASSEMBLY_H

@class NSString;
@protocol TFAssembly;

#import <Foundation/Foundation.h>


@interface SWFactoryAssembly : NSObject <TFAssembly>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)loadInRegistry:(id)arg0 ;


@end


#endif