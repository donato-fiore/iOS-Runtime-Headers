// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHLIBRARYCATEGORYMAPPROVIDERDEFAULTSOURCE_H
#define SBHLIBRARYCATEGORYMAPPROVIDERDEFAULTSOURCE_H

@class NSString;
@protocol SBHLibraryCategoryMapProviderSource, SBHLibraryCategoryMapProviderSourceDelegate;

#import <Foundation/Foundation.h>

#import "SBHIconModel.h"

@interface SBHLibraryCategoryMapProviderDefaultSource : NSObject <SBHLibraryCategoryMapProviderSource>

 {
    SBHIconModel *_iconModel;
    BOOL _refreshScheduled;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHLibraryCategoryMapProviderSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *sourceName;
@property (readonly) Class superclass;


-(id)initWithIconModel:(id)arg0 ;
-(void)_requestRefresh:(id)arg0 ;
-(void)requestLibraryCategoryMapWithOptions:(NSUInteger)arg0 existingLibraryCategoryMap:(id)arg1 forbiddenApplicationIdentifiers:(id)arg2 sessionId:(NSUInteger)arg3 queue:(id)arg4 completion:(id)arg5 ;


@end


#endif