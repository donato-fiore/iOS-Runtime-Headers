// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _FBSMISINTERFACEWRAPPERIMPL_H
#define _FBSMISINTERFACEWRAPPERIMPL_H

@class NSString;
@protocol _FBSMISInterfaceWrapper;

#import <Foundation/Foundation.h>


@interface _FBSMISInterfaceWrapperImpl : NSObject <_FBSMISInterfaceWrapper>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(int)signatureVersion:(id)arg0 version:(*unsigned int)arg1 ;
-(int)validateSignatureForPath:(id)arg0 options:(id)arg1 userInfo:(*id)arg2 ;


@end


#endif