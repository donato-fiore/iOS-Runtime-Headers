// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RUIELEMENT_H
#define RUIELEMENT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "RUIElement.h"
#import "RUIStyle.h"

@interface RUIElement : NSObject

@property (copy, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (copy, nonatomic) NSString *body; // ivar: _body
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) RUIElement *parent; // ivar: _parent
@property (retain, nonatomic) RUIStyle *style; // ivar: _style
@property (nonatomic) BOOL wantsInlineActivityIndicator; // ivar: _wantsInlineActivityIndicator


-(BOOL)hasImage;
-(BOOL)loadImage;
-(BOOL)loadImageFromImageURL;
-(BOOL)loadSystemImage;
-(id)URLAttributeForImageName:(id)arg0 getScale:(*CGFloat)arg1 ;
-(id)_ruielement_staticFunctions;
-(id)_ruielement_staticValues;
-(id)_symbolConfigurationWithRenderingMode:(id)arg0 ;
-(id)image:(id)arg0 size:(struct CGSize )arg1 ;
-(id)init;
-(id)initWithAttributes:(id)arg0 parent:(id)arg1 ;
-(id)mutableAttributes;
-(id)pageElement;
-(id)sourceURL;
-(id)staticFunctions;
-(id)staticValues;
-(id)subElementWithID:(id)arg0 ;
-(id)subElementsWithName:(id)arg0 ;
-(id)systemImageNamed:(id)arg0 symbolRenderingMode:(id)arg1 ;
-(id)textStyleWithString:(id)arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(int)_horizontalAlignmentForString:(id)arg0 ;
-(struct OpaqueJSClass *)_JSClass;
-(struct OpaqueJSValue *)JSValueForContext:(struct OpaqueJSContext *)arg0 ;
-(void)configureView:(id)arg0 ;
-(void)dealloc;
-(void)imageLoaded:(id)arg0 ;
-(void)pageDidChange;
-(void)performAction:(int)arg0 completion:(id)arg1 ;
-(void)performAction:(int)arg0 forElement:(id)arg1 completion:(id)arg2 ;
-(void)populatePostbackDictionary:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImageAlignment:(int)arg0 ;
-(void)setImageSize:(struct CGSize )arg0 ;
-(void)startActivityIndicator;
-(void)stopActivityIndicator;


@end


#endif