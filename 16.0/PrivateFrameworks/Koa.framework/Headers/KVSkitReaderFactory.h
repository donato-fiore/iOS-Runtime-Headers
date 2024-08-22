// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVSKITREADERFACTORY_H
#define KVSKITREADERFACTORY_H

@class NSMutableDictionary;
@protocol KVSkitAccessProvider, KVSkitReadAccess;

#import <Foundation/Foundation.h>


@interface KVSkitReaderFactory : NSObject <KVSkitAccessProvider>

 {
    NSObject<KVSkitReadAccess> *_cachedLocalReader;
    NSMutableDictionary *_cachedRemoteReaders;
}




+(id)_rootDirectoryURL;
-(BOOL)setItems:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsMultiUser;
-(id)_provideAccess:(id)arg0 forUser:(id)arg1 ;
-(id)accessReadOnlySkitForUser:(id)arg0 ;
-(id)init;


@end


#endif