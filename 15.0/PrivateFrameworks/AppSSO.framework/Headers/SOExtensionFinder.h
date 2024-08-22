// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOEXTENSIONFINDER_H
#define SOEXTENSIONFINDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SOExtensionFinder : NSObject {
    NSObject<OS_dispatch_queue> *_extensionFinderQueue;
    id *_matchingContext;
}




-(id)_soExtensionsForExtensions:(id)arg0 ;
-(id)init;
-(void)beginMatchingExtensionsWithCompletion:(id)arg0 ;
-(void)endMatchingExtensions;
-(void)findExtensionWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)findExtensionsWithCompletion:(id)arg0 ;


@end


#endif