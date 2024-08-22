// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMSAVEDSEARCHSCOPE_H
#define EDAMSAVEDSEARCHSCOPE_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMSavedSearchScope : FATObject

@property (retain, nonatomic) NSNumber *includeAccount; // ivar: _includeAccount
@property (retain, nonatomic) NSNumber *includeBusinessLinkedNotebooks; // ivar: _includeBusinessLinkedNotebooks
@property (retain, nonatomic) NSNumber *includePersonalLinkedNotebooks; // ivar: _includePersonalLinkedNotebooks


+(id)structFields;
+(id)structName;


@end


#endif