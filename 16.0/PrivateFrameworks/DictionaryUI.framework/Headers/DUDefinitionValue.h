// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DUDEFINITIONVALUE_H
#define DUDEFINITIONVALUE_H

@class NSAttributedString, NSDictionary, NSString, MAAsset;

#import <Foundation/Foundation.h>


@interface DUDefinitionValue : NSObject

@property (readonly) NSAttributedString *definition; // ivar: _definition
@property (readonly) NSDictionary *definitionElements; // ivar: _definitionElements
@property *__CFArray foundRecordRefs; // ivar: _foundRecordRefs
@property (readonly) NSString *localizedDictionaryName; // ivar: _localizedDictionaryName
@property (readonly) NSString *longDefinition; // ivar: _longDefinition
@property (retain, nonatomic) MAAsset *rawAsset; // ivar: _rawAsset
@property (readonly) NSString *term; // ivar: _term


-(id)_HTMLDefinitionForType:(NSInteger)arg0 ;
-(id)description;
-(id)initWithDefinitionDictionary:(id)arg0 term:(id)arg1 ;
-(void)dealloc;


@end


#endif