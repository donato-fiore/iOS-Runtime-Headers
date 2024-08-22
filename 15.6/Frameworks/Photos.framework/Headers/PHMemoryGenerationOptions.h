// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHMEMORYGENERATIONOPTIONS_H
#define PHMEMORYGENERATIONOPTIONS_H

@class NSArray, NSDate, NSDictionary, CLLocation;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHMemoryGenerationOptions : NSObject <NSCopying>



@property (retain, nonatomic) NSArray *blockedMemories; // ivar: _blockedMemories
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSArray *existingMemories; // ivar: _existingMemories
@property (retain, nonatomic) NSDictionary *extraParameters; // ivar: _extraParameters
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (retain, nonatomic) NSArray *peopleNames; // ivar: _peopleNames
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (nonatomic) NSUInteger reason; // ivar: _reason


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;


@end


#endif