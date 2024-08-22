// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVCONTACTMAPPER_H
#define CKVCONTACTMAPPER_H

@class NSString;
@protocol CKVItemMapper;

#import <Foundation/Foundation.h>


@interface CKVContactMapper : NSObject <CKVItemMapper>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_addLabeledFieldsOfType:(NSInteger)arg0 labeledValues:(id)arg1 labelOnly:(BOOL)arg2 builder:(id)arg3 error:(*id)arg4 ;
+(NSInteger)targetItemType;
+(id)_flattenLabeledValue:(id)arg0 ;
+(id)_itemBufferFromContact:(id)arg0 error:(*id)arg1 ;
+(id)itemBufferFromExternalVocabularyItem:(id)arg0 error:(*id)arg1 ;


@end


#endif