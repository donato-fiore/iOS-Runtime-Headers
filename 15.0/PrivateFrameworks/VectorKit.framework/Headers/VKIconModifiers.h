// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKICONMODIFIERS_H
#define VKICONMODIFIERS_H


#import <Foundation/Foundation.h>


@interface VKIconModifiers : NSObject {
    IconModifiers _iconModifiers;
}


@property (nonatomic) NSUInteger countryCode; // ivar: _countryCode
@property (nonatomic) BOOL interactive; // ivar: _interactive
@property (nonatomic) BOOL navMode; // ivar: _navMode
@property (nonatomic) BOOL nightMode; // ivar: _nightMode
@property (nonatomic, getter=isSearchResult) BOOL searchResult; // ivar: _searchResult
@property (nonatomic) NSUInteger secondaryVariant; // ivar: _secondaryVariant
@property (nonatomic) BOOL transitMode; // ivar: _transitMode
@property (nonatomic) NSUInteger variant; // ivar: _variant
@property (nonatomic) NSInteger zoom; // ivar: _zoom


-(*void)cppModifiers;
-(id)init;
-(id)initWithModifiers:(*void)arg0 ;
-(void)setGlyphOnly:(BOOL)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTransitLineColor:(struct ? )arg0 ;


@end


#endif