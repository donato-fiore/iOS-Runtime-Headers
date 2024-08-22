// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXNSEXTENSIONSHIMEXTENSION_H
#define _EXNSEXTENSIONSHIMEXTENSION_H

@class EXExtension;



@interface _EXNSExtensionShimExtension : EXExtension

@property (retain) Class extensionContextClass; // ivar: _extensionContextClass
@property (retain) Class principalClass; // ivar: _principalClass


-(BOOL)loadDelegateWithClass:(Class)arg0 ;
-(BOOL)shouldAcceptConnection:(id)arg0 ;
-(void)didFinishLaunching;
-(void)willFinishLaunching;


@end


#endif