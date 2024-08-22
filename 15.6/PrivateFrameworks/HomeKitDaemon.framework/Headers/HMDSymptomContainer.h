// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSYMPTOMCONTAINER_H
#define HMDSYMPTOMCONTAINER_H

@class NSSet, NSString;
@protocol HMDAccessorySymptomsDelegate;

#import <Foundation/Foundation.h>


@interface HMDSymptomContainer : NSObject

@property (copy, nonatomic) NSSet *broadcastedSymptoms; // ivar: _broadcastedSymptoms
@property (weak, nonatomic) NSObject<HMDAccessorySymptomsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (copy, nonatomic) NSSet *localSymptoms; // ivar: _localSymptoms


-(id)initWithIDSIdentifier:(id)arg0 ;


@end


#endif