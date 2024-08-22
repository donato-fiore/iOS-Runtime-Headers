// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSECTION_H
#define SSSECTION_H

@class NSString, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSSection : NSObject <NSCopying>



@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (weak, nonatomic) Class footerClass; // ivar: _footerClass
@property (nonatomic) CGFloat footerHeight; // ivar: _footerHeight
@property (copy, nonatomic) NSString *header; // ivar: _header
@property (weak, nonatomic) Class headerClass; // ivar: _headerClass
@property (nonatomic) CGFloat headerHeight; // ivar: _headerHeight
@property (readonly, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) id *sectionIdentifier; // ivar: _sectionIdentifier


+(id)sectionWithItems:(id)arg0 ;
+(id)sectionWithItems:(id)arg0 header:(id)arg1 footer:(id)arg2 identifier:(id)arg3 ;
+(id)sectionWithNumberOfItems:(NSUInteger)arg0 ;
+(id)sectionWithNumberOfItems:(NSUInteger)arg0 header:(id)arg1 footer:(id)arg2 identifier:(id)arg3 ;
-(NSUInteger)numberOfItems;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)itemAtIndex:(NSUInteger)arg0 ;


@end


#endif