// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRINAMESPACEKEYLOCATOR_H
#define TRINAMESPACEKEYLOCATOR_H


#import <Foundation/Foundation.h>


@interface TRINamespaceKeyLocator : NSObject



+(id)_fileNameForNamespaceIdentifier:(id)arg0 asymmetric:(BOOL)arg1 ;
+(id)_keyFileSearchLocationsForNamespace:(id)arg0 asymmetric:(BOOL)arg1 ;
+(id)_namespaceIdForNamespace:(id)arg0 ;
+(id)keyDataForNamespace:(id)arg0 asymmetric:(BOOL)arg1 ;
+(id)keyFileURLForNamespace:(id)arg0 asymmetric:(BOOL)arg1 ;


@end


#endif