// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRINAMESPACESTATUSPROVIDER_H
#define TRINAMESPACESTATUSPROVIDER_H

@protocol TRIPaths;

#import <Foundation/Foundation.h>


@interface TRINamespaceStatusProvider : NSObject {
    id<TRIPaths> *_paths;
}




-(BOOL)deleteStatusForNamespaceWithName:(id)arg0 ;
-(BOOL)saveNamespaceStatus:(id)arg0 toURL:(id)arg1 ;
-(BOOL)saveStatus:(id)arg0 ;
-(BOOL)updateStatusForNamespaceWithName:(id)arg0 usingBlock:(id)arg1 ;
-(id)initWithPaths:(id)arg0 ;
-(id)loadNamespaceStatusFromURL:(id)arg0 ;
-(id)statusForNamespaceWithName:(id)arg0 ;
-(id)urlForStatusWithNamespaceName:(id)arg0 ;


@end


#endif