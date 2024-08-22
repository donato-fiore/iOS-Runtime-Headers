// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKRPUSERDEFAULTSSYNCPROVIDER_H
#define HKRPUSERDEFAULTSSYNCPROVIDER_H

@class NPSManager, NSString;
@protocol HKRPUserDefaultsSyncProviding;

#import <Foundation/Foundation.h>


@interface HKRPUserDefaultsSyncProvider : NSObject <HKRPUserDefaultsSyncProviding>

 {
    NPSManager *_manager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *userDefaultsDomain; // ivar: _userDefaultsDomain


-(id)initWithUserDefaultsDomain:(id)arg0 ;
-(void)synchronizeKeys:(id)arg0 ;


@end


#endif