// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKIDENTIFIEDPROVIDERREGISTRY_H
#define CRKIDENTIFIEDPROVIDERREGISTRY_H

@class NSMutableOrderedSet, NSArray;

#import <Foundation/Foundation.h>


@interface CRKIdentifiedProviderRegistry : NSObject {
    NSMutableOrderedSet *_identifiedProviders;
}


@property (readonly, nonatomic) NSArray *identifiedProviders;


+(id)sharedInstance;
-(id)init;
-(void)registerIdentifiedProvider:(id)arg0 ;
-(void)unregisterIdentifiedProvider:(id)arg0 ;


@end


#endif