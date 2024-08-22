// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLISTSECTION_H
#define CPLISTSECTION_H

@class NSString, UIImage, NSUUID, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPButton.h"
#import "CPListTemplate.h"

@interface CPListSection : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *header; // ivar: _header
@property (readonly, copy, nonatomic) CPButton *headerButton; // ivar: _headerButton
@property (copy, nonatomic) UIImage *headerImage; // ivar: _headerImage
@property (readonly, copy, nonatomic) NSString *headerSubtitle; // ivar: _headerSubtitle
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) NSInteger index; // ivar: _index
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (weak, nonatomic) CPListTemplate *listTemplate; // ivar: _listTemplate
@property (nonatomic) NSUInteger sectionHeaderStyle; // ivar: _sectionHeaderStyle
@property (readonly, copy, nonatomic) NSString *sectionIndexTitle; // ivar: _sectionIndexTitle


+(BOOL)supportsSecureCoding;
-(NSInteger)numberOfItems;
-(NSUInteger)indexOfItem:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 header:(id)arg1 headerSubtitle:(id)arg2 headerImage:(id)arg3 headerButton:(id)arg4 sectionIndexTitle:(id)arg5 ;
-(id)initWithItems:(id)arg0 header:(id)arg1 sectionIndexTitle:(id)arg2 ;
-(id)itemAtIndex:(NSUInteger)arg0 ;
-(void)_commonInitWithItems:(id)arg0 header:(id)arg1 headerSubtitle:(id)arg2 headerImage:(id)arg3 headerButton:(id)arg4 sectionIndexTitle:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)replaceItemAtIndex:(NSUInteger)arg0 withItem:(id)arg1 ;
-(void)replaceItems:(id)arg0 ;


@end


#endif