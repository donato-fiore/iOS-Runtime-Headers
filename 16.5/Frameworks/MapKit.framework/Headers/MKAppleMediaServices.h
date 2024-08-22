// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKAPPLEMEDIASERVICES_H
#define MKAPPLEMEDIASERVICES_H


#import <Foundation/Foundation.h>


@interface MKAppleMediaServices : NSObject



+(id)sharedInstance;
+(id)sourceStringWithSource:(NSInteger)arg0 ;
-(NSInteger)AMSMediaTaskTypeFromGEOAppleMediaServicesMediaType:(NSInteger)arg0 ;
-(id)additionalParameterWithType:(NSInteger)arg0 ;
-(id)externalRequestCounterRequestSubtypeWithType:(NSInteger)arg0 ;
-(id)externalRequestCounterRequestType;
-(void)appleMediaServicesResultsWithBundleIdentifiers:(id)arg0 artworkSize:(struct CGSize )arg1 screenScale:(CGFloat)arg2 source:(NSInteger)arg3 completion:(id)arg4 ;
-(void)appleMediaServicesResultsWithBundleIdentifiers:(id)arg0 source:(NSInteger)arg1 completion:(id)arg2 ;
-(void)appleMediaServicesResultsWithIdentifiers:(id)arg0 artworkSize:(struct CGSize )arg1 screenScale:(CGFloat)arg2 type:(NSInteger)arg3 source:(NSInteger)arg4 completion:(id)arg5 ;
-(void)appleMediaServicesResultsWithIdentifiers:(id)arg0 bundleIdentifiers:(id)arg1 artworkSize:(struct CGSize )arg2 screenScale:(CGFloat)arg3 type:(NSInteger)arg4 source:(NSInteger)arg5 completion:(id)arg6 ;
-(void)appleMediaServicesResultsWithIdentifiers:(id)arg0 source:(NSInteger)arg1 completion:(id)arg2 ;
-(void)mediaResultWithIdentifiers:(id)arg0 bundleIdentifiers:(id)arg1 artworkSize:(struct CGSize )arg2 screenScale:(CGFloat)arg3 type:(NSInteger)arg4 source:(NSInteger)arg5 completion:(id)arg6 ;


@end


#endif