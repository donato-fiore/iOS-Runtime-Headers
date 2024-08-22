// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSKEYCHAINITEM_H
#define VSKEYCHAINITEM_H

@class NSMutableDictionary, NSData;

#import <Foundation/Foundation.h>

#import "VSKeychainEditingContext.h"
#import "VSKeychainItemKind.h"

@interface VSKeychainItem : NSObject

@property (retain, nonatomic) NSMutableDictionary *committedValues; // ivar: _committedValues
@property (copy, nonatomic) NSData *data;
@property (nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (weak, nonatomic) VSKeychainEditingContext *editingContext; // ivar: _editingContext
@property (readonly, nonatomic) BOOL hasChanges;
@property (nonatomic) BOOL hasFaultForData; // ivar: _hasFaultForData
@property (readonly, nonatomic) BOOL hasPersistentChangedValues;
@property (nonatomic, getter=isInserted) BOOL inserted; // ivar: _inserted
@property (readonly, copy, nonatomic) VSKeychainItemKind *itemKind; // ivar: _itemKind
@property (retain, nonatomic) NSMutableDictionary *primitiveValues; // ivar: _primitiveValues
@property (nonatomic, getter=isUpdated) BOOL updated; // ivar: _updated


-(id)changedValues;
-(id)committedValueForKey:(id)arg0 ;
-(id)committedValuesForKeys:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithItemKind:(id)arg0 insertIntoEditingContext:(id)arg1 ;
-(id)primitiveValueForKey:(id)arg0 ;
-(void)didAccessValueForKey:(id)arg0 ;
-(void)setPrimitiveValue:(id)arg0 forKey:(id)arg1 ;
-(void)willAccessValueForKey:(id)arg0 ;
-(void)willChangeValueForKey:(id)arg0 ;


@end


#endif