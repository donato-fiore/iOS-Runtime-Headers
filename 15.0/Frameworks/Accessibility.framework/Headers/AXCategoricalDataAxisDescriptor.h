// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXCATEGORICALDATAAXISDESCRIPTOR_H
#define AXCATEGORICALDATAAXISDESCRIPTOR_H

@class NSAttributedString, NSArray, NSString;
@protocol AXDictionaryRepresentable, AXDataAxisDescriptor;

#import <Foundation/Foundation.h>


@interface AXCategoricalDataAxisDescriptor : NSObject <AXDictionaryRepresentable, AXDataAxisDescriptor>



@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (copy, nonatomic) NSArray *categoryOrder; // ivar: _categoryOrder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithAttributedTitle:(id)arg0 categoryOrder:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTitle:(id)arg0 categoryOrder:(id)arg1 ;


@end


#endif