// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPOVERLAPPINGFIELDSWRAPPER_H
#define TSWPOVERLAPPINGFIELDSWRAPPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSWPStorage.h"

@interface TSWPOverlappingFieldsWrapper : NSObject {
    NSMutableArray *_fields;
    TSWPStorage *_parentStorage;
}




-(BOOL)hasField:(id)arg0 ;
-(BOOL)isEqualToOverlappingFieldWrapper:(id)arg0 ;
-(BOOL)isEquivalentToObject:(id)arg0 ;
-(NSUInteger)indexOfField:(id)arg0 ;
-(NSUInteger)sortedSearchForIndexOfField:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fields;
-(id)findFieldWithTextAttributeUUIDString:(id)arg0 ;
-(id)initWithField:(id)arg0 parentStorage:(id)arg1 ;
-(id)initWithFields:(id)arg0 parentStorage:(id)arg1 ;
-(id)parentStorage;
-(void)addField:(id)arg0 ;
-(void)removeField:(id)arg0 ;
-(void)resetTextAttributeUUIDString;
-(void)setParentStorage:(id)arg0 ;
-(void)sortWithContext:(*void)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif