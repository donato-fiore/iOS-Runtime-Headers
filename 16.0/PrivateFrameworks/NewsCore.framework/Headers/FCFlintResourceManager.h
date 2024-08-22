// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFLINTRESOURCEMANAGER_H
#define FCFLINTRESOURCEMANAGER_H

@protocol FCContentContext;

#import <Foundation/Foundation.h>


@interface FCFlintResourceManager : NSObject {
    id<FCContentContext> *_context;
}




-(id)cachedResourceWithIdentifier:(id)arg0 ;
-(id)cachedResourcesWithIdentifiers:(id)arg0 ;
-(id)fetchFontResourcesWithIdentifiers:(id)arg0 downloadAssets:(BOOL)arg1 relativePriority:(NSInteger)arg2 callBackQueue:(id)arg3 completionBlock:(id)arg4 ;
-(id)fetchResourcesWithIdentifiers:(id)arg0 downloadAssets:(BOOL)arg1 relativePriority:(NSInteger)arg2 callBackQueue:(id)arg3 completionBlock:(id)arg4 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;


@end


#endif