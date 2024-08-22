// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC13TSPERSISTENCE23TSPMUTABLEIDENTIFIERSET_H
#define _TTC13TSPERSISTENCE23TSPMUTABLEIDENTIFIERSET_H


#import <Foundation/Foundation.h>


@interface _TtC13TSPersistence23TSPMutableIdentifierSet : NSObject {
    ? identifierSet;
}


@property (nonatomic, readonly) NSInteger count;
@property (nonatomic, readonly) NSInteger hash;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)countForIdentifier:(NSInteger)arg0 default:(NSInteger)arg1 ;
-(NSInteger)incrementCountBy:(NSInteger)arg0 forIdentifier:(NSInteger)arg1 ;
-(id)init;
-(id)initWithCapacity:(NSInteger)arg0 ;
-(id)makeIdentifierSet;
-(void)enumerateIdentifiersUsingBlock:(id)arg0 ;
-(void)mergeWithIdentifierSet:(id)arg0 ;


@end


#endif