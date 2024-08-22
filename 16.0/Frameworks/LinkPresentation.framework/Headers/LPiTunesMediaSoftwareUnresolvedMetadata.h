// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPITUNESMEDIASOFTWAREUNRESOLVEDMETADATA_H
#define LPITUNESMEDIASOFTWAREUNRESOLVEDMETADATA_H

@class NSString, NSNumber, NSArray;
@protocol LPiTunesMediaUnresolvedMetadata;

#import <Foundation/Foundation.h>

#import "LPiTunesMediaAsset.h"

@interface LPiTunesMediaSoftwareUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (copy, nonatomic) NSNumber *hasMessagesExtension; // ivar: _hasMessagesExtension
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPiTunesMediaAsset *icon; // ivar: _icon
@property (copy, nonatomic) NSNumber *isHiddenFromSpringboard; // ivar: _isHiddenFromSpringboard
@property (retain, nonatomic) LPiTunesMediaAsset *messagesAppIcon; // ivar: _messagesAppIcon
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *platform; // ivar: _platform
@property (retain, nonatomic) LPiTunesMediaAsset *previewVideo; // ivar: _previewVideo
@property (retain, nonatomic) NSArray *screenshots; // ivar: _screenshots
@property (copy, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;


-(id)assetsToFetch;
-(id)resolve;


@end


#endif