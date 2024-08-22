// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRINAMESPACEDESCRIPTORPROVIDER_H
#define TRINAMESPACEDESCRIPTORPROVIDER_H

@class NSString;
@protocol TRINamespaceDescriptorProviding;

#import <Foundation/Foundation.h>

#import "TRINamespaceDatabase.h"

@interface TRINamespaceDescriptorProvider : NSObject <TRINamespaceDescriptorProviding>

 {
    TRINamespaceDatabase *_namespaceDatabase;
    NSString *_descriptorDirectory;
}




+(id)_descriptorFromDynamicNamespaceRecord:(id)arg0 ;
+(id)providerWithNamespaceDatabase:(id)arg0 defaultDescriptorDirectoryPath:(id)arg1 ;
-(id)_dynamicDescriptorsForContainer:(int)arg0 teamId:(id)arg1 ;
-(id)descriptorWithNamespaceName:(id)arg0 ;
-(id)initWithNamespaceDatabase:(id)arg0 defaultDescriptorDirectoryPath:(id)arg1 ;
-(void)enumerateDefaultDescriptorsWithBlock:(id)arg0 ;


@end


#endif