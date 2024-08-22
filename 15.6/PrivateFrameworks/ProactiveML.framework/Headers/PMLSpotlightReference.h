// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLSPOTLIGHTREFERENCE_H
#define PMLSPOTLIGHTREFERENCE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PMLSpotlightReference : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly, nonatomic) NSArray *itemIdentifiers; // ivar: _itemIdentifiers


+(id)referenceWithBundleId:(id)arg0 domainId:(id)arg1 itemIds:(id)arg2 ;
-(id)initWithBundleId:(id)arg0 domainId:(id)arg1 itemIds:(id)arg2 ;


@end


#endif