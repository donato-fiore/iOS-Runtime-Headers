// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMEDIALIBRARYTRACKBUILDER_H
#define SHMEDIALIBRARYTRACKBUILDER_H

@class NSURL, NSDate, NSSet, CLLocation, NSString;

#import <Foundation/Foundation.h>

#import "SHShazamKey.h"

@interface SHMediaLibraryTrackBuilder : NSObject

@property (retain, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSSet *labels; // ivar: _labels
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (copy, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (copy, nonatomic) NSString *providerName; // ivar: _providerName
@property (copy, nonatomic) NSString *recognitionIdentifier; // ivar: _recognitionIdentifier
@property (retain, nonatomic) SHShazamKey *shazamKey; // ivar: _shazamKey
@property (retain, nonatomic) NSURL *shazamURL; // ivar: _shazamURL
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithCreationDate:(id)arg0 ;


@end


#endif