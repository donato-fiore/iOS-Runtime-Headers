// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVVIEWELEMENT_H
#define TVVIEWELEMENT_H

@class NSDictionary, NSString, NSArray, IKViewElement;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TVViewElement.h"
#import "TVViewElementStyle.h"

@interface TVViewElement : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *autoHighlightIdentifier;
@property (readonly, nonatomic) NSArray *childViewElements;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly, weak, nonatomic) IKViewElement *element; // ivar: _element
@property (readonly, nonatomic) NSDictionary *elementData;
@property (readonly, nonatomic) NSString *elementIdentifier;
@property (readonly, nonatomic) NSString *elementName;
@property (readonly, weak, nonatomic) TVViewElement *parentViewElement;
@property (nonatomic, getter=isParsedOnce) BOOL parsedOnce; // ivar: _parsedOnce
@property (readonly, nonatomic) NSInteger semanticContentAttribute;
@property (readonly, nonatomic) TVViewElementStyle *style;
@property (readonly, nonatomic) NSInteger updateType;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithViewElement:(id)arg0 ;
-(void)dispatchEventOfType:(NSInteger)arg0 canBubble:(BOOL)arg1 cancellable:(BOOL)arg2 extraInfo:(id)arg3 completion:(id)arg4 ;
-(void)dispatchEventWithName:(id)arg0 canBubble:(BOOL)arg1 cancellable:(BOOL)arg2 extraInfo:(id)arg3 completion:(id)arg4 ;
-(void)resetProperty:(NSInteger)arg0 ;


@end


#endif