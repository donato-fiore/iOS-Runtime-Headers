// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUILABELVIEWELEMENT_H
#define SKUILABELVIEWELEMENT_H

@class NSMutableDictionary, IKDOMElement, NSArray, NSString;
@protocol SKUILinkHandler;


#import "SKUIViewElement.h"
#import "SKUIViewElementText.h"

@interface SKUILabelViewElement : SKUIViewElement <SKUILinkHandler>

 {
    NSInteger _linkCounter;
    NSMutableDictionary *_linkToViewButtonElements;
    NSMutableDictionary *_domObjectsToViewElements;
    SKUIViewElementText *_text;
    IKDOMElement *_xml;
}


@property (readonly, nonatomic) NSInteger badgePlacement; // ivar: _badgePlacement
@property (readonly, nonatomic) NSArray *badges; // ivar: _badges
@property (nonatomic) BOOL containsLinks; // ivar: _containsLinks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger labelViewStyle; // ivar: _labelViewStyle
@property (weak, nonatomic) NSObject<SKUILinkHandler> *linkDelegate; // ivar: _linkDelegate
@property (readonly, nonatomic) NSString *moreButtonTitle; // ivar: _moreButtonTitle
@property (readonly, nonatomic) NSInteger numberOfLines; // ivar: _numberOfLines
@property (readonly) Class superclass;
@property (readonly, nonatomic) SKUIViewElementText *text;
@property (readonly, nonatomic) NSArray *trailingBadges; // ivar: _trailingBadges


+(BOOL)shouldParseChildDOMElements;
-(NSInteger)pageComponentType;
-(id)_stringFromDateElement:(id)arg0 ;
-(id)_stringFromDurationElement:(id)arg0 ;
-(id)_stringFromNumberElement:(id)arg0 ;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)uniquingMapKey;
-(void)_createText:(id)arg0 ;
-(void)_walkDOM:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(void)dealloc;
-(void)linkTapped:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif