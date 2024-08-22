// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLLOCATIONATTRIBUTERTREEEXTENSION_H
#define NSSQLLOCATIONATTRIBUTERTREEEXTENSION_H

@class NSArray, NSString;
@protocol NSSQLAttributeExtension;

#import <Foundation/Foundation.h>

#import "NSSQLEntity.h"
#import "NSAttributeDescription.h"

@interface NSSQLLocationAttributeRTreeExtension : NSObject <NSSQLAttributeExtension>

 {
    NSObject *_userInfoObject;
    NSArray *_components;
    NSSQLEntity *_sqlEntity;
    NSString *_attributeName;
    NSString *_rtreeTableName;
    NSAttributeDescription *_attributeDescription;
    NSAttributeDescription *_latProp;
    NSAttributeDescription *_longProp;
    NSArray *_insertSQLStrings;
    NSArray *_dropSQLStrings;
    NSArray *_bulkUpdateSQLStrings;
}


@property (readonly, nonatomic) NSArray *bulkUpdateSQLStrings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *dropSQLStrings;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *insertSQLStrings;
@property (readonly) Class superclass;


-(BOOL)isEqualToExtension:(id)arg0 ;
-(BOOL)validate:(*id)arg0 ;
-(id)initWithObjectFromUserInfo:(id)arg0 onAttributeNamed:(id)arg1 onEntity:(id)arg2 ;
-(void)dealloc;


@end


#endif