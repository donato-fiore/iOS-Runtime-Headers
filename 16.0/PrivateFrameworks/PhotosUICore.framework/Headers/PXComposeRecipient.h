// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCOMPOSERECIPIENT_H
#define PXCOMPOSERECIPIENT_H

@class CNContact, NSString, NSDictionary;
@protocol NSCopying, PXTapToRadar, PXPersonSuggestion;

#import <Foundation/Foundation.h>

#import "PXRecipient.h"

@interface PXComposeRecipient : NSObject <NSCopying, PXTapToRadar>



@property (readonly, nonatomic) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *diagnosticDictionary;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSObject<PXPersonSuggestion> *personSuggestion; // ivar: _personSuggestion
@property (readonly, nonatomic) PXRecipient *recipient; // ivar: _recipient
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPersonSuggestion:(id)arg0 ;
-(id)initWithPersonSuggestion:(id)arg0 contact:(id)arg1 ;
-(id)initWithRecipient:(id)arg0 ;


@end


#endif