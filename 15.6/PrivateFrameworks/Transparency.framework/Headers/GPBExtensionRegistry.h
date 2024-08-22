// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBEXTENSIONREGISTRY_H
#define GPBEXTENSIONREGISTRY_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GPBExtensionRegistry : NSObject <NSCopying>

 {
    NSMutableDictionary *mutableClassMap_;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)extensionForDescriptor:(id)arg0 fieldNumber:(NSInteger)arg1 ;
-(id)init;
-(void)addExtension:(id)arg0 ;
-(void)addExtensions:(id)arg0 ;
-(void)dealloc;


@end


#endif