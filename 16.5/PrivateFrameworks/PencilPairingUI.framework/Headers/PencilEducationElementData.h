// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PENCILEDUCATIONELEMENTDATA_H
#define PENCILEDUCATIONELEMENTDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PencilEducationElementData : NSObject

@property (retain, nonatomic) NSString *languageID; // ivar: _languageID
@property (retain, nonatomic) NSString *placeholderTextContent; // ivar: _placeholderTextContent
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *textContent; // ivar: _textContent
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type


+(id)elementDataForType:(NSInteger)arg0 languageID:(id)arg1 ;
+(id)prefixForElementType:(NSInteger)arg0 ;


@end


#endif