// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSKEEPLOCALREQUESTVALIDATOR_H
#define NMSKEEPLOCALREQUESTVALIDATOR_H

@class NSOperationQueue, MPModelObject;

#import <Foundation/Foundation.h>


@interface NMSKeepLocalRequestValidator : NSObject {
    NSOperationQueue *_validationQueue;
}


@property (readonly, nonatomic) MPModelObject *modelObject; // ivar: _modelObject


-(NSUInteger)_aggregatedFetchOfFileSizeForQuery:(id)arg0 withLibrary:(id)arg1 ;
-(NSUInteger)_fetchSizeOfModelObjectItems;
-(NSUInteger)_fetchSizeOfPendingDownloadsWithPowerConstraintCheck:(BOOL)arg0 ;
-(id)_arrayOfUniqueTrackPIDsFromQuery:(id)arg0 ;
-(id)_predicateForKeepLocalStatusDownloadingOrWaiting;
-(id)initWithModelObject:(id)arg0 ;
-(void)_continueValidationWithCurrentResults:(NSUInteger)arg0 cellularNetwork:(BOOL)arg1 completion:(id)arg2 ;
-(void)performWithQualityOfService:(NSInteger)arg0 cellularBundleIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif