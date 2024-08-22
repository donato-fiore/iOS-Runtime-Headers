// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKDARGONINTERNALKEYFETCHER_H
#define NTKDARGONINTERNALKEYFETCHER_H

@class NSString;
@protocol NTKArgonFetcherProviding;

#import <Foundation/Foundation.h>


@interface NTKDArgonInternalKeyFetcher : NSObject <NTKArgonFetcherProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)fetchNewRecordsSinceChangeToken:(id)arg0 forReason:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif