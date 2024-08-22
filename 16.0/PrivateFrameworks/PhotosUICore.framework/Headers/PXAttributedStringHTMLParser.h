// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXATTRIBUTEDSTRINGHTMLPARSER_H
#define PXATTRIBUTEDSTRINGHTMLPARSER_H

@class NSDictionary, NSCountedSet, NSString;

#import <Foundation/Foundation.h>


@interface PXAttributedStringHTMLParser : NSObject

@property (copy, nonatomic, setter=_setCurrentAttributes:) NSDictionary *_currentAttributes; // ivar: __currentAttributes
@property (readonly, nonatomic) NSCountedSet *_currentMarkupElements; // ivar: __currentMarkupElements
@property (nonatomic, setter=_setCurrentTraits:) unsigned int _currentTraits; // ivar: __currentTraits
@property (readonly, copy, nonatomic) NSDictionary *_defaultAttributes; // ivar: __defaultAttributes
@property (readonly, copy, nonatomic) NSString *_htmlString; // ivar: __htmlString
@property (copy, nonatomic) NSDictionary *emphasizedAttributes; // ivar: _emphasizedAttributes
@property (copy, nonatomic) NSDictionary *italicizedAttributes; // ivar: _italicizedAttributes
@property (copy, nonatomic) id *parsedAttributedStringBlock; // ivar: _parsedAttributedStringBlock
@property (copy, nonatomic) id *parsedErrorBlock; // ivar: _parsedErrorBlock


+(id)stringByConvertingToHTML:(id)arg0 ;
-(id)init;
-(id)initWithHTMLString:(id)arg0 defaultAttributes:(id)arg1 ;
-(void)_updateCurrentTraits;
-(void)parse;


@end


#endif