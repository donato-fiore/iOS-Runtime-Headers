// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEUPDATERSTATE_H
#define DEUPDATERSTATE_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "DEFilter.h"

@interface DEUpdaterState : NSObject

@property (retain, nonatomic) NSString *backgroundId; // ivar: _backgroundId
@property (retain, nonatomic) NSData *builtinVersion; // ivar: _builtinVersion
@property BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) DEFilter *filter; // ivar: _filter
@property (retain, nonatomic) NSData *latestVersion; // ivar: _latestVersion
@property (retain, nonatomic) NSData *promotedVersion; // ivar: _promotedVersion
@property (retain, nonatomic) NSString *publicationId; // ivar: _publicationId
@property (retain, nonatomic) NSString *publicationURL; // ivar: _publicationURL
@property (retain, nonatomic) NSData *syncedVersion; // ivar: _syncedVersion


+(id)stateFromPb:(*void)arg0 ;
+(void)stateToPb:(id)arg0 statePb:(*void)arg1 ;


@end


#endif