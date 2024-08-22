// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKXATOMORCSCHEMA_H
#define CKXATOMORCSCHEMA_H

@protocol CKXORCHelpers;

#import <Foundation/Foundation.h>


@interface CKXAtomORCSchema : NSObject <CKXORCHelpers>



@property (readonly, nonatomic) NSObject<CKXORCHelpers> *implementation; // ivar: _implementation


-(NSUInteger)listColumnIndexForReference:(NSUInteger)arg0 ;
-(NSUInteger)structReferenceIndexForReference:(NSUInteger)arg0 ;
-(NSUInteger)topLevelIndexForStruct:(NSUInteger)arg0 ;
-(NSUInteger)valueColumnIndexForField:(NSUInteger)arg0 ;
-(id)generateSchema;
-(id)initWithBinding:(id)arg0 formatVersion:(unsigned char)arg1 ;
-(void)configureColumnsWithRootColumn:(*void)arg0 ;


@end


#endif