// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDATASECTION_H
#define PXDATASECTION_H

@protocol NSFastEnumeration, NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface PXDataSection : NSObject <NSFastEnumeration>



@property (readonly, nonatomic) BOOL containsAnyObjects;
@property (readonly, nonatomic) id *content; // ivar: _content
@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<NSObject><NSCopying> *outlineObject; // ivar: _outlineObject


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)description;
-(id)init;
-(id)initWithOutlineObject:(id)arg0 ;
-(id)objectAtIndex:(NSInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;


@end


#endif