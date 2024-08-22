// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC13TSPERSISTENCE22TSPMUTABLEREFERENCEMAP_H
#define _TTC13TSPERSISTENCE22TSPMUTABLEREFERENCEMAP_H


#import <Foundation/Foundation.h>


@interface _TtC13TSPersistence22TSPMutableReferenceMap : NSObject {
    ? referenceMap;
}


@property (nonatomic, readonly) NSInteger count;
@property (nonatomic, readonly) NSInteger hash;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)addReferenceFromIdentifier:(NSInteger)arg0 toIdentifier:(NSInteger)arg1 ;
-(NSInteger)incrementReferenceFromIdentifier:(NSInteger)arg0 toIdentifier:(NSInteger)arg1 increment:(NSInteger)arg2 ;
-(NSInteger)removeReferenceFromIdentifier:(NSInteger)arg0 toIdentifier:(NSInteger)arg1 ;
-(id)allReferencesFromIdentifier:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSInteger)arg0 ;
-(id)makeReferenceMap;
-(void)enumerateReferencesUsingBlock:(id)arg0 ;
-(void)mergeWithReferenceMap:(id)arg0 ;
-(void)replaceReferencesFromIdentifier:(NSInteger)arg0 withIdentifierSet:(id)arg1 ;


@end


#endif