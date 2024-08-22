// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPAGEOMETRYOPERATORSEQUENCE_H
#define IPAGEOMETRYOPERATORSEQUENCE_H

@class NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;


#import "IPAGeometryOperator.h"

@interface IPAGeometryOperatorSequence : IPAGeometryOperator {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *map_identifierToOperator;
    NSMutableDictionary *map_identifierToIndex;
    NSMutableArray *_operators;
}




+(id)sequence;
+(id)sequenceWithIdentifier:(id)arg0 ;
-(BOOL)appendOperator:(id)arg0 ;
-(BOOL)removeOperatorWithIdentifier:(id)arg0 ;
-(BOOL)replaceOperatorWithIdentifier:(id)arg0 withOperator:(id)arg1 ;
-(NSUInteger)count;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(id)subsequenceFrom:(id)arg0 to:(id)arg1 ;
-(id)transformForGeometry:(id)arg0 ;


@end


#endif