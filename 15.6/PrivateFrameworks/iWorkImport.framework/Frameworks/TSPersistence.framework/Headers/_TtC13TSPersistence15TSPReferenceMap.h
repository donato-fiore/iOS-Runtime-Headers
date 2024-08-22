// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13TSPERSISTENCE15TSPREFERENCEMAP_H
#define _TTC13TSPERSISTENCE15TSPREFERENCEMAP_H


#import <Foundation/Foundation.h>


@interface _TtC13TSPersistence15TSPReferenceMap : NSObject {
    ? referenceMap;
}


@property (nonatomic, readonly) NSInteger count;
@property (nonatomic, readonly) NSInteger hash;


-(BOOL)isEqual:(id)arg0 ;
-(id)allReferencesFromIdentifier:(NSInteger)arg0 ;
-(id)init;
-(id)makeMutableReferenceMap;
-(void)enumerateReferencesUsingBlock:(id)arg0 ;


@end


#endif