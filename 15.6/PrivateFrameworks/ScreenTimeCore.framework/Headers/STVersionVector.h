// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STVERSIONVECTOR_H
#define STVERSIONVECTOR_H

@class NSData, NSString, NSMutableDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STVersionVector : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (copy, nonatomic) NSString *editorIdentifier; // ivar: _editorIdentifier
@property (retain, nonatomic) NSMutableDictionary *nodeByIdentifier; // ivar: _nodeByIdentifier
@property (readonly, nonatomic) NSArray *nodes;


-(BOOL)isConcurrentWithVersionVector:(id)arg0 ;
-(BOOL)isEqualToVersionVector:(id)arg0 ;
-(BOOL)precedesVersionVector:(id)arg0 ;
-(NSUInteger)evaluateCausality:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)initWithNode:(id)arg0 ;
-(void)incrementNodeWithIdentifier:(id)arg0 ;
-(void)join:(id)arg0 ;


@end


#endif