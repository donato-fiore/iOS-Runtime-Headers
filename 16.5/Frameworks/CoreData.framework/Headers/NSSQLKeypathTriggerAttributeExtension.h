// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLKEYPATHTRIGGERATTRIBUTEEXTENSION_H
#define NSSQLKEYPATHTRIGGERATTRIBUTEEXTENSION_H

@class NSString, NSArray;
@protocol NSSQLAttributeExtension;

#import <Foundation/Foundation.h>

#import "NSSQLEntity.h"
#import "NSSQLAttribute.h"
#import "NSSQLRelationship.h"

@interface NSSQLKeypathTriggerAttributeExtension : NSObject <NSSQLAttributeExtension>

 {
    id *_objectFromUserInfo;
    NSString *_keypath;
    NSSQLEntity *_entity;
    NSSQLAttribute *_attribute;
    NSSQLRelationship *_countedRelationship;
}


@property (readonly, nonatomic) NSArray *bulkUpdateSQLStrings; // ivar: _bulkUpdateSQLStrings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *dropSQLStrings; // ivar: _dropSQLStrings
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *insertSQLStrings; // ivar: _insertSQLStrings
@property (readonly) Class superclass;


-(BOOL)isEqualToExtension:(id)arg0 ;
-(BOOL)validate:(*id)arg0 ;
-(id)initWithObjectFromUserInfo:(id)arg0 onAttributeNamed:(id)arg1 onEntity:(id)arg2 ;
-(void)dealloc;


@end


#endif