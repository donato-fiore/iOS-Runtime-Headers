// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINDEXABLEOBJECT_H
#define HKINDEXABLEOBJECT_H


#import <Foundation/Foundation.h>


@interface HKIndexableObject : NSObject

@property (readonly, nonatomic) NSUInteger compoundIndex; // ivar: _compoundIndex
@property (readonly, copy, nonatomic) id *object; // ivar: _object
@property (readonly, nonatomic) unsigned char outermostIndex;


+(id)indexableObjectWithObject:(id)arg0 ;
+(id)indexableObjectWithObject:(id)arg0 compoundIndex:(NSUInteger)arg1 ;
+(id)indexableObjectWithObject:(id)arg0 index:(unsigned char)arg1 error:(*id)arg2 ;
+(id)indexableObjectsByApplyingOutermostIndex:(id)arg0 expectedCount:(NSInteger)arg1 error:(*id)arg2 ;
-(id)indexableObjectCollectingPushingIndex:(unsigned char)arg0 error:(*id)arg1 ;
-(id)indexableObjectPoppingIndexWithError:(*id)arg0 ;
-(id)init;
-(id)initWithObject:(id)arg0 compoundIndex:(NSUInteger)arg1 ;


@end


#endif