// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLMOMENTSHARESCOPECHANGE_H
#define CPLMOMENTSHARESCOPECHANGE_H

@class NSDate, NSString, NSData;


#import "CPLScopeChange.h"

@interface CPLMomentShareScopeChange : CPLScopeChange

@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (copy, nonatomic) NSString *originatingScopeIdentifier; // ivar: _originatingScopeIdentifier
@property (copy, nonatomic) NSData *previewImageData; // ivar: _previewImageData
@property (nonatomic) NSInteger promisedAssetCount; // ivar: _promisedAssetCount
@property (nonatomic) NSInteger promisedPhotosCount; // ivar: _promisedPhotosCount
@property (nonatomic) NSInteger promisedVideosCount; // ivar: _promisedVideosCount
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (copy, nonatomic) NSData *thumbnailImageData; // ivar: _thumbnailImageData
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)momentShare;
-(void)setLibraryInfo:(id)arg0 ;
-(void)setMomentShare:(id)arg0 ;
-(void)udpateScopeFromScopeChange:(id)arg0 direction:(NSUInteger)arg1 didHaveChanges:(*BOOL)arg2 ;


@end


#endif