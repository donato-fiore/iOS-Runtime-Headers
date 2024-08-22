// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNFAVORITESENTRY_H
#define CNFAVORITESENTRY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CNContactStore.h"
#import "CNContact.h"
#import "CNContactProperty.h"

@interface CNFavoritesEntry : NSObject {
    NSString *_name;
    NSString *_actionType;
    NSString *_bundleIdentifier;
    NSInteger _type;
    CNContactStore *_contactStore;
    NSString *_label;
    NSString *_propertyKey;
    NSString *_abDatabaseUUID;
    NSString *_originalName;
    CNContact *_contact;
    NSString *_labeledValueIdentifier;
}


@property (nonatomic) int abIdentifier; // ivar: _abIdentifier
@property (nonatomic) int abUid; // ivar: _abUid
@property (retain, nonatomic) NSString *actionChannel; // ivar: _actionChannel
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) CNContactProperty *contactProperty;
@property (nonatomic) BOOL dirty; // ivar: _dirty
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) int oldAbUid; // ivar: _oldAbUid
@property (readonly, nonatomic) NSInteger type;
@property (retain, nonatomic) NSString *value; // ivar: _value


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)rematchWithContacts;
-(BOOL)rematchWithGeminiManager:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithContact:(id)arg0 propertyKey:(id)arg1 identifier:(id)arg2 type:(NSInteger)arg3 ;
-(id)initWithContact:(id)arg0 propertyKey:(id)arg1 identifier:(id)arg2 type:(NSInteger)arg3 store:(id)arg4 ;
-(id)initWithContact:(id)arg0 propertyKey:(id)arg1 labeledValueIdentifier:(id)arg2 actionType:(id)arg3 bundleIdentifier:(id)arg4 store:(id)arg5 ;
-(id)initWithDictionaryRepresentation:(id)arg0 store:(id)arg1 ;
-(id)rematch;
-(void)applyChangeRecord:(id)arg0 ;
-(void)dealloc;
-(void)dictionaryRepresentation:(*id)arg0 isDirty:(*BOOL)arg1 ;
-(void)resetContactMatch;


@end


#endif