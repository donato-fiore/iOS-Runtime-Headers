// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWVIEWCONTROLLERASSEMBLY_H
#define SWVIEWCONTROLLERASSEMBLY_H

@class NSString;
@protocol TFAssembly;

#import <Foundation/Foundation.h>


@interface SWViewControllerAssembly : NSObject <TFAssembly>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)loadInRegistry:(id)arg0 ;


@end


#endif