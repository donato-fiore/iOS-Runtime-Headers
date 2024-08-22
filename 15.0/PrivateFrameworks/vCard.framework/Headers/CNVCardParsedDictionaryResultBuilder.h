// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNVCARDPARSEDDICTIONARYRESULTBUILDER_H
#define CNVCARDPARSEDDICTIONARYRESULTBUILDER_H

@class NSMutableDictionary, NSString;
@protocol CNVCardParsedResultBuilder;

#import <Foundation/Foundation.h>


@interface CNVCardParsedDictionaryResultBuilder : NSObject <CNVCardParsedResultBuilder>

 {
    NSMutableDictionary *_dictionaryRep;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)factory;
-(BOOL)canSetValueForProperty:(id)arg0 ;
-(BOOL)setImageData:(id)arg0 ;
-(BOOL)setImageData:(id)arg0 forReference:(id)arg1 clipRects:(id)arg2 ;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(BOOL)setValues:(id)arg0 labels:(id)arg1 isPrimaries:(id)arg2 forProperty:(id)arg3 ;
-(id)build;
-(id)init;
-(id)validCountryCodes;
-(id)valueForProperty:(id)arg0 ;
-(void)setUnknownProperties:(id)arg0 ;


@end


#endif