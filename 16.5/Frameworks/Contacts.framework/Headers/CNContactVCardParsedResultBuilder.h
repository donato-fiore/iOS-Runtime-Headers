// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTVCARDPARSEDRESULTBUILDER_H
#define CNCONTACTVCARDPARSEDRESULTBUILDER_H

@class NSString;
@protocol CNVCardParsedResultBuilder;

#import <Foundation/Foundation.h>

#import "CNMutableContact.h"

@interface CNContactVCardParsedResultBuilder : NSObject <CNVCardParsedResultBuilder>

 {
    CNMutableContact *_contact;
    BOOL _empty;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contactKeyForVCardKey:(id)arg0 ;
+(id)contactValueTransformForVCardKey:(SEL)arg0 ;
// +(id)labeledValuesWithValues:(id)arg0 transform:(id)arg1 labels:(unk)arg2 isPrimaries:(id)arg3  ;
+(id)os_log;
-(BOOL)canSetValueForProperty:(id)arg0 ;
-(BOOL)setImageData:(id)arg0 forReference:(id)arg1 clipRects:(id)arg2 ;
-(BOOL)setPersonFlags:(NSInteger)arg0 ;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(BOOL)setValues:(id)arg0 labels:(id)arg1 isPrimaries:(id)arg2 forProperty:(id)arg3 ;
-(NSInteger)contactTypeFromPersonFlags:(NSInteger)arg0 ;
-(NSInteger)personFlags;
-(NSUInteger)personFlagsByAddingContactType:(NSInteger)arg0 toFlags:(NSUInteger)arg1 ;
-(id)build;
-(id)init;
-(id)validCountryCodes;
-(id)valueForProperty:(id)arg0 ;
-(void)setUnknownProperties:(id)arg0 ;


@end


#endif