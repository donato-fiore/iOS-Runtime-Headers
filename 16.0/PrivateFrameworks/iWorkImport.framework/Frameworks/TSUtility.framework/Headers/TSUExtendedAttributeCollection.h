// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUEXTENDEDATTRIBUTECOLLECTION_H
#define TSUEXTENDEDATTRIBUTECOLLECTION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSUExtendedAttributeCollection : NSObject {
    NSMutableDictionary *_attributes;
}




+(BOOL)removeExtraExtendedAttributesAtPath:(id)arg0 forIntent:(unsigned int)arg1 options:(int)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setAttributeCollectionToPath:(id)arg0 intent:(unsigned int)arg1 options:(int)arg2 error:(*id)arg3 ;
-(BOOL)setAttributeCollectionToPath:(id)arg0 intent:(unsigned int)arg1 options:(int)arg2 forRemoval:(BOOL)arg3 error:(*id)arg4 ;
-(NSUInteger)hash;
-(id)allAttributes;
-(id)description;
-(id)extendedAttributeForName:(id)arg0 ;
-(id)init;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithPath:(id)arg0 forRemoval:(BOOL)arg1 options:(int)arg2 error:(*id)arg3 ;
-(id)initWithPath:(id)arg0 options:(int)arg1 error:(*id)arg2 ;
-(void)setExtendedAttributeValue:(id)arg0 forName:(id)arg1 ;


@end


#endif