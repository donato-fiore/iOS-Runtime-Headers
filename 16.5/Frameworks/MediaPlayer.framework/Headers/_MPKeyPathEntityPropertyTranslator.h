// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPKEYPATHENTITYPROPERTYTRANSLATOR_H
#define _MPKEYPATHENTITYPROPERTYTRANSLATOR_H

@class NSString, NSArray;
@protocol MPEntityPropertyTranslator;

#import <Foundation/Foundation.h>


@interface _MPKeyPathEntityPropertyTranslator : NSObject <MPEntityPropertyTranslator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sourceKeyPaths; // ivar: _sourceKeyPaths
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *valueTransformBlock; // ivar: _valueTransformBlock
@property (readonly, nonatomic) *unk valueTransformFunction; // ivar: _valueTransformFunction


+(id)translatorForKeyPaths:(id)arg0 valueTransformBlock:(id)arg1 ;
+(id)translatorForKeyPaths:(id)arg0 valueTransformFunction:(*unk)arg1 ;
-(id)valueFromSource:(id)arg0 context:(id)arg1 ;


@end


#endif