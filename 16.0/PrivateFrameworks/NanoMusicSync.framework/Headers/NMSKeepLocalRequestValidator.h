// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(void)performWithQualityOfService:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif