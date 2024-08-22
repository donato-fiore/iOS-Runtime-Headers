// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRCODER_H
#define CRCODER_H

@class NSOrderedSet, NSMutableOrderedSet, NSDictionary;

#import <Foundation/Foundation.h>


@interface CRCoder : NSObject

@property (readonly, nonatomic) NSOrderedSet *clusterTypeSet; // ivar: _clusterTypeSet
@property (nonatomic) *void currentDocument; // ivar: _currentDocument
@property (retain, nonatomic) NSMutableOrderedSet *encodedObjects; // ivar: _encodedObjects
@property (readonly, nonatomic) NSOrderedSet *typeSet;
@property (readonly, nonatomic) NSDictionary *typeToClassDict;


+(void)_registerClass:(Class)arg0 forType:(id)arg1 cluster:(BOOL)arg2 ;
+(void)registerCRClasses;
+(void)registerClass:(Class)arg0 forType:(id)arg1 ;
-(NSUInteger)typeIndexForClass:(Class)arg0 ;


@end


#endif