// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISURLRESOURCEPROPERTYSPECIFICATION_H
#define ISURLRESOURCEPROPERTYSPECIFICATION_H

@class NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface ISURLResourcePropertySpecification : NSObject

@property (readonly) NSSet *allowedMissingProperties; // ivar: _allowedMissingProperties
@property (readonly) NSArray *applicationProperties; // ivar: _applicationProperties
@property (readonly) NSArray *generalProperties; // ivar: _generalProperties
@property (readonly) NSArray *iconInitWithURLProperties;
@property (readonly) NSArray *otherProperties; // ivar: _otherProperties
@property (readonly) NSArray *volumeProperties; // ivar: _volumeProperties


+(id)sharedInstance;
-(id)_init;


@end


#endif