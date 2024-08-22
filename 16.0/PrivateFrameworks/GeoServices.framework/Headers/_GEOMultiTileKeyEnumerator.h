// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOMULTITILEKEYENUMERATOR_H
#define _GEOMULTITILEKEYENUMERATOR_H

@class NSArray, NSString;
@protocol GEOTileKeyEnumerator;

#import <Foundation/Foundation.h>


@interface _GEOMultiTileKeyEnumerator : NSObject <GEOTileKeyEnumerator>

 {
    NSArray *_enumerators;
    unsigned int _currentEnumeratorIndex;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)continueEnumeratingTileKeysWithBlock:(id)arg0 ;
-(id)initWithEnumerators:(id)arg0 ;


@end


#endif