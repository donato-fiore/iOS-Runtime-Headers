// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSYMPTOMCONTAINER_H
#define HMDSYMPTOMCONTAINER_H

@class NSString, NSSet;
@protocol HMDAccessorySymptomsDelegate;

#import <Foundation/Foundation.h>


@interface HMDSymptomContainer : NSObject

@property (weak, nonatomic) NSObject<HMDAccessorySymptomsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (copy, nonatomic) NSSet *symptoms; // ivar: _symptoms


-(id)initWithIDSIdentifier:(id)arg0 ;


@end


#endif