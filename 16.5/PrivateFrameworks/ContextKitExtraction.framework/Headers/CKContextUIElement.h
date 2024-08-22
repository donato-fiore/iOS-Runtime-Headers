// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTUIELEMENT_H
#define CKCONTEXTUIELEMENT_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKContextUIElement : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) CGPoint absoluteOriginOnScreen; // ivar: _absoluteOriginOnScreen
@property (retain, nonatomic) NSString *className; // ivar: _className
@property (nonatomic) float density; // ivar: _density
@property (nonatomic) float fontSize; // ivar: _fontSize
@property (nonatomic) CGRect frameInWindow; // ivar: _frameInWindow
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (retain, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (retain, nonatomic) NSArray *superviewClassNames; // ivar: _superviewClassNames
@property (retain, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareByPosition:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 className:(id)arg1 ;
-(id)toJSONSerializableDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif