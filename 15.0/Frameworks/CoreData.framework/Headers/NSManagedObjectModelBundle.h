// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSMANAGEDOBJECTMODELBUNDLE_H
#define NSMANAGEDOBJECTMODELBUNDLE_H

@class NSBundle, NSDictionary;

#import <Foundation/Foundation.h>


@interface NSManagedObjectModelBundle : NSObject {
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}




-(id)_modelForVersionHashes:(id)arg0 ;
-(id)_modelForVersionHashes:(id)arg0 inStyle:(NSUInteger)arg1 ;
-(id)currentVersion;
-(id)currentVersionURL;
-(id)initWithPath:(id)arg0 ;
-(id)modelVersions;
-(id)optimizedVersionURL;
-(id)urlForModelVersionWithName:(id)arg0 ;
-(void)dealloc;


@end


#endif