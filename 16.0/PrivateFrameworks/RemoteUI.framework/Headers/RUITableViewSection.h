// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RUITABLEVIEWSECTION_H
#define RUITABLEVIEWSECTION_H

@class NSMutableArray, NSNumber, UIView<RemoteUITableFooter>, UIView<RUIHeader>, NSArray;
@protocol RUIHeaderDelegate, RUITableFooterDelegate, NSCopying;


#import "RUIElement.h"
#import "RUITableViewHeaderFooterView.h"
#import "RUIDetailHeaderElement.h"
#import "RUIMultiChoiceElement.h"
#import "RUITableViewRow.h"
#import "RUISubHeaderElement.h"
#import "RUITableView.h"

@interface RUITableViewSection : RUIElement <RUIHeaderDelegate, RUITableFooterDelegate, NSCopying>

 {
    NSMutableArray *_rows;
    NSInteger _disclosureLimit;
    NSNumber *_drawsTopSeparator;
}


@property (nonatomic) BOOL configured; // ivar: _configured
@property (retain, nonatomic) RUITableViewHeaderFooterView *containerizedFooterView; // ivar: _containerizedFooterView
@property (retain, nonatomic) RUITableViewHeaderFooterView *containerizedHeaderView; // ivar: _containerizedHeaderView
@property (retain, nonatomic) RUIDetailHeaderElement *detailHeader; // ivar: _detailHeader
@property (nonatomic) BOOL drawTopSeparator;
@property (retain, nonatomic) RUIElement *footer; // ivar: _footer
@property (nonatomic) CGFloat footerHeight; // ivar: _footerHeight
@property (retain, nonatomic) UIView<RemoteUITableFooter> *footerView; // ivar: _footerView
@property (retain, nonatomic) RUIElement *header; // ivar: _header
@property (nonatomic) CGFloat headerHeight; // ivar: _headerHeight
@property (retain, nonatomic) UIView<RUIHeader> *headerView; // ivar: _headerView
@property (retain, nonatomic) RUIMultiChoiceElement *multiChoiceElement; // ivar: _multiChoiceElement
@property (readonly, nonatomic) NSArray *rows;
@property (retain, nonatomic) RUITableViewRow *showAllRow; // ivar: _showAllRow
@property (retain, nonatomic) RUISubHeaderElement *subHeader; // ivar: _subHeader
@property (weak, nonatomic) RUITableView *tableElement; // ivar: _tableElement


-(BOOL)hasCustomFooter;
-(BOOL)hasCustomHeader;
-(BOOL)hasValueForDrawsTopSeparator;
-(Class)_customFooterClass;
-(Class)_customHeaderClass;
-(id)colorFromAttributeString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAttributes:(id)arg0 parent:(id)arg1 ;
-(id)staticFunctions;
-(id)staticValues;
-(id)subElementWithID:(id)arg0 ;
-(id)subElementsWithName:(id)arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)addRow:(id)arg0 ;
-(void)footerView:(id)arg0 activatedLinkWithURL:(id)arg1 ;
-(void)headerView:(id)arg0 activatedLinkWithURL:(id)arg1 ;
-(void)headerViewDidChange:(id)arg0 ;
-(void)insertRow:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)populatePostbackDictionary:(id)arg0 ;
-(void)removeRowAtIndex:(NSUInteger)arg0 ;
-(void)setAttributes:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImageAlignment:(int)arg0 ;
-(void)setImageSize:(struct CGSize )arg0 ;
-(void)tappedShowAllRowWithTable:(id)arg0 ;


@end


#endif