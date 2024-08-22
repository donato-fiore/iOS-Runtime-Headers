// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHFACEPROPERTYSET_H
#define PHFACEPROPERTYSET_H

@class NSString;
@protocol PHFacePropertySet;

#import <Foundation/Foundation.h>

#import "PHFace.h"

@interface PHFacePropertySet : NSObject <PHFacePropertySet>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) PHFace *face; // ivar: _face
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isToMany;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertiesToPrefetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 face:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif