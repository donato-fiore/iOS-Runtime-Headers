// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACLANGUAGEMODEL_H
#define CACLANGUAGEMODEL_H

@class NSMutableDictionary, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CACLanguageModel : NSObject <NSCopying>



@property (readonly) NSMutableDictionary *attributes; // ivar: _attributes
@property (readonly) NSArray *children; // ivar: _children
@property (retain) NSString *identifier; // ivar: _identifier
@property (retain) NSString *text; // ivar: _text


-(id)_initWithLanguageModel:(id)arg0 ;
-(id)_mutableAttributes;
-(id)_mutableChildren;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithText:(id)arg0 identifier:(id)arg1 attributes:(id)arg2 ;
-(id)objectForAttribute:(id)arg0 ;
-(struct __RXLanguageObject *)createRXLanguageObjectRef;
-(void)addChildLanguageModel:(id)arg0 ;
-(void)logTreeDescriptionWithLevel:(int)arg0 ;
-(void)removeAllChildren;
-(void)setObject:(id)arg0 forAttribute:(id)arg1 ;


@end


#endif