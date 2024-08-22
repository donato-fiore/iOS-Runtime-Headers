// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKXATOMORCSCHEMAFORMATVERSIONORC_H
#define CKXATOMORCSCHEMAFORMATVERSIONORC_H

@protocol CKXORCHelpers;

#import <Foundation/Foundation.h>

#import "CKXAtomBindingImplementation.h"

@interface CKXAtomORCSchemaFormatVersionORC : NSObject <CKXORCHelpers>



@property (readonly, nonatomic) CKXAtomBindingImplementation *binding; // ivar: _binding


-(NSUInteger)listColumnIndexForReference:(NSUInteger)arg0 ;
-(NSUInteger)structReferenceIndexForReference:(NSUInteger)arg0 ;
-(NSUInteger)topLevelIndexForStruct:(NSUInteger)arg0 ;
-(NSUInteger)valueColumnIndexForField:(NSUInteger)arg0 ;
-(id)generateSchema;
-(id)initWithBinding:(id)arg0 ;
-(void)configureColumnsWithRootColumn:(*void)arg0 ;


@end


#endif