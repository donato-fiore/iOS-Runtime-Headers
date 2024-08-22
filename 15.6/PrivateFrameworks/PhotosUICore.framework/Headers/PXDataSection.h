// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDATASECTION_H
#define PXDATASECTION_H

@class NSString;
@protocol PXFastEnumeration, NSFastEnumeration, NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface PXDataSection : NSObject <PXFastEnumeration, NSFastEnumeration>



@property (readonly, nonatomic) BOOL containsAnyObjects;
@property (readonly, nonatomic) id *content; // ivar: _content
@property (readonly) NSUInteger count;
@property (readonly, nonatomic) NSInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *firstObject;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<NSObject><NSCopying> *outlineObject; // ivar: _outlineObject
@property (readonly) Class superclass;


+(id)dataSectionForAssetsInAssetContainers:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOutlineObject:(id)arg0 ;
-(id)objectAtIndex:(NSInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;


@end


#endif