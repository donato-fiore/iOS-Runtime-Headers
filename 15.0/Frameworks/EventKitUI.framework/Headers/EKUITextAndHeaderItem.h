// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUITEXTANDHEADERITEM_H
#define EKUITEXTANDHEADERITEM_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface EKUITextAndHeaderItem : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSString *header; // ivar: _header
@property (nonatomic) NSInteger lines; // ivar: _lines
@property (retain, nonatomic) NSString *text; // ivar: _text


+(id)itemWithText:(id)arg0 andHeader:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif