// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVHOMEENTITYMAPPER_H
#define CKVHOMEENTITYMAPPER_H

@class NSString;
@protocol CKVItemMapper;

#import <Foundation/Foundation.h>


@interface CKVHomeEntityMapper : NSObject <CKVItemMapper>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)_fieldTypeFromHomeEntityType:(unsigned short)arg0 ;
+(NSInteger)targetItemType;
+(id)_itemBufferFromHomeEntity:(id)arg0 error:(*id)arg1 ;
+(id)itemBufferFromExternalVocabularyItem:(id)arg0 error:(*id)arg1 ;


@end


#endif