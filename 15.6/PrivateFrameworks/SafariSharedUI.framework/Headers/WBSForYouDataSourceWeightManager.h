// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSFORYOUDATASOURCEWEIGHTMANAGER_H
#define WBSFORYOUDATASOURCEWEIGHTMANAGER_H

@protocol WBSDictionaryKeyValueStore;

#import <Foundation/Foundation.h>


@interface WBSForYouDataSourceWeightManager : NSObject {
    id<WBSDictionaryKeyValueStore> *_store;
}




-(CGFloat)weightForSource:(NSUInteger)arg0 ;
-(id)initWithKeyValueStore:(id)arg0 ;
-(void)clear;
-(void)downvoteSource:(NSUInteger)arg0 ;


@end


#endif