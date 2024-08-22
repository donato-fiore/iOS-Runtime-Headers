// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFCONTAINER_H
#define TFCONTAINER_H

@protocol TFResolver;

#import <Foundation/Foundation.h>


@interface TFContainer : NSObject {
    ? container;
}


@property (nonatomic, readonly) NSObject<TFResolver> *resolver; // ivar: resolver


-(id)init;
-(id)initWithBundleAssemblies:(id)arg0 assemblies:(id)arg1 ;


@end


#endif