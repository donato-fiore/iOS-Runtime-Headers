// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHTRACKMO_H
#define SHTRACKMO_H

@class NSManagedObject, NSURL, NSDate, NSArray, NSString;


#import "SHGroupMO.h"
#import "SHMetadataMO.h"

@interface SHTrackMO : NSManagedObject

@property (copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) SHGroupMO *group;
@property (retain, nonatomic) NSArray *labels;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (retain, nonatomic) SHMetadataMO *metadata;
@property (copy, nonatomic) NSString *providerID;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) NSString *recognitionID;
@property (copy, nonatomic) NSString *shazamKey;
@property (copy, nonatomic) NSURL *shazamURL;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *syncID;
@property (copy, nonatomic) NSString *title;


+(id)fetchRequest;


@end


#endif