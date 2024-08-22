// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPMEDIAREMOTEENTITYPROPERTYTRANSLATOR_H
#define _MPMEDIAREMOTEENTITYPROPERTYTRANSLATOR_H

@class NSString;
@protocol MPEntityPropertyTranslator;

#import <Foundation/Foundation.h>


@interface _MPMediaRemoteEntityPropertyTranslator : NSObject <MPEntityPropertyTranslator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *valueTransformBlock; // ivar: _valueTransformBlock


+(id)translatorWithBlock:(id)arg0 ;
+(id)translatorWithKeyPath:(id)arg0 ;
-(id)valueFromSource:(id)arg0 context:(id)arg1 ;


@end


#endif