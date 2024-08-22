// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KMMAPPER_SAPERSON_H
#define KMMAPPER_SAPERSON_H

@class KVItemBuilder, NSNumber, NSString;
@protocol KMMapper;

#import <Foundation/Foundation.h>


@interface KMMapper_SAPerson : NSObject <KMMapper>

 {
    KVItemBuilder *_builder;
    NSNumber *_sharedUserIdKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)externalObjectClass;
-(BOOL)_addLabeledFieldsForEmails:(id)arg0 error:(*id)arg1 ;
-(BOOL)_addLabeledFieldsForPhones:(id)arg0 error:(*id)arg1 ;
-(BOOL)_addLabeledFieldsForPostalAddresses:(id)arg0 error:(*id)arg1 ;
-(BOOL)_addLabeledFieldsForRelatedNames:(id)arg0 error:(*id)arg1 ;
-(NSInteger)targetItemType;
-(id)init;
-(id)itemsFromExternalObject:(id)arg0 additionalFields:(id)arg1 error:(*id)arg2 ;


@end


#endif