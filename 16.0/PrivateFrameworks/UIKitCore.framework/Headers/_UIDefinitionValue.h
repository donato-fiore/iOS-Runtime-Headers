// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDEFINITIONVALUE_H
#define _UIDEFINITIONVALUE_H

@class NSAttributedString, NSString, MAAsset;

#import <Foundation/Foundation.h>


@interface _UIDefinitionValue : NSObject

@property (readonly) NSAttributedString *definition; // ivar: _definition
@property (readonly) NSString *localizedDictionaryName; // ivar: _localizedDictionaryName
@property (readonly) NSString *longDefinition; // ivar: _longDefinition
@property (retain, nonatomic) MAAsset *rawAsset; // ivar: _rawAsset
@property (readonly) NSString *term; // ivar: _term


-(id)description;
-(id)initWithLocalizedDictionaryName:(id)arg0 term:(id)arg1 definition:(id)arg2 longDefinition:(id)arg3 ;


@end


#endif