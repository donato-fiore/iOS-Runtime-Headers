// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUEXTENSIONASSEMBLY_H
#define NUEXTENSIONASSEMBLY_H

@class NSString;
@protocol TFAssembly, NUExtensionContextProvider;

#import <Foundation/Foundation.h>


@interface NUExtensionAssembly : NSObject <TFAssembly>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<NUExtensionContextProvider> *extensionContextProvider; // ivar: _extensionContextProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithExtensionContextProvider:(id)arg0 ;
-(void)loadInRegistry:(id)arg0 ;


@end


#endif