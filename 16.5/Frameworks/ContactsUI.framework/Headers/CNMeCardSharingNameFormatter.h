// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMECARDSHARINGNAMEFORMATTER_H
#define CNMECARDSHARINGNAMEFORMATTER_H

@class NSMutableDictionary, NSPersonNameComponents;
@protocol CNMeCardSharingNameProvider;

#import <Foundation/Foundation.h>


@interface CNMeCardSharingNameFormatter : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedFormattedNames; // ivar: _cachedFormattedNames
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (readonly, nonatomic) NSObject<CNMeCardSharingNameProvider> *nameProvider; // ivar: _nameProvider


+(id)formattedNameFromComponents:(id)arg0 forProvider:(id)arg1 withFormat:(NSUInteger)arg2 ;
+(id)formattedNameFromProvider:(id)arg0 withFormat:(NSUInteger)arg1 ;
+(id)nameComponentsFromProvider:(id)arg0 ;
-(id)formattedNameWithFormat:(NSUInteger)arg0 ;
-(id)initWithNameProvider:(id)arg0 ;


@end


#endif