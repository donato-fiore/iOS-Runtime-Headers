// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CRKCONCRETEARRAYDIFFERENCECONFIGURATION_H
#define _CRKCONCRETEARRAYDIFFERENCECONFIGURATION_H

@class NSString;
@protocol CRKArrayDifferenceConfiguration;

#import <Foundation/Foundation.h>


@interface _CRKConcreteArrayDifferenceConfiguration : NSObject <CRKArrayDifferenceConfiguration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *incomingItemsIdentifierFunction; // ivar: _incomingItemsIdentifierFunction
@property (copy, nonatomic) id *liftingFunction; // ivar: _liftingFunction
@property (copy, nonatomic) id *publishedItemsComparator; // ivar: _publishedItemsComparator
@property (copy, nonatomic) id *publishedItemsIdentifierFunction; // ivar: _publishedItemsIdentifierFunction
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock




@end


#endif