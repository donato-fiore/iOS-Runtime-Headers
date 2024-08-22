// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIADESTINATIONCONTROLLER_H
#define HMMEDIADESTINATIONCONTROLLER_H

@class NSArray, NSString, NSUUID;
@protocol HMFLogging, HMObjectMerge, HMFObject, HMMediaDestinationControllerDataSource, HMMediaDestinationControllerDelegate, HMMediaDestination;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMMediaDestinationController : NSObject <HMFLogging, HMObjectMerge, HMFObject>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (copy) NSArray *availableDestinationIdentifiers; // ivar: _availableDestinationIdentifiers
@property (readonly, copy) NSArray *availableDestinations;
@property (retain) _HMContext *context; // ivar: _context
@property (weak) NSObject<HMMediaDestinationControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMMediaDestinationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMMediaDestination> *destination;
@property (copy) NSUUID *destinationIdentifier; // ivar: _destinationIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (retain) NSString *lastNotifiedDestinationIdentifier; // ivar: _lastNotifiedDestinationIdentifier
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)availableDestinationIdentifiersIsEqualToIdentifiers:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithControllerData:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 destinationIdentifier:(id)arg1 availableDestinationIdentifiers:(id)arg2 ;
-(id)logIdentifier;
-(void)_notifyDidUpdateDestination;
-(void)callCompletionHandler:(id)arg0 ;
// -(void)callCompletionHandler:(id)arg0 error:(unk)arg1  ;
-(void)configureWithContext:(id)arg0 dataSource:(id)arg1 ;
-(void)notifyDidUpdateAvailableDestinations;
-(void)notifyDidUpdateDestination;
-(void)unconfigure;
-(void)updateDestination:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif