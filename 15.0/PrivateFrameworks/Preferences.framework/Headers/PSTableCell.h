// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSTABLECELL_H
#define PSTABLECELL_H

@class UITableViewCell, UIImageView, NSString, NSURLSession, NSURL, NSArray, UILongPressGestureRecognizer;


#import "PSTableCellHighlightContext.h"
#import "PSSpecifier.h"

@interface PSTableCell : UITableViewCell {
    id *_value;
    UIImageView *_checkedImageView;
    BOOL _checked;
    BOOL _shouldHideTitle;
    NSString *_hiddenTitle;
    int _alignment;
    SEL _pAction;
    id *_pTarget;
    BOOL _cellEnabled;
    BOOL _lazyIcon;
    BOOL _lazyIconDontUnload;
    BOOL _lazyIconForceSynchronous;
    NSString *_lazyIconAppID;
    PSTableCellHighlightContext *_customHighlightContext;
    NSURLSession *_urlSession;
    NSURL *_lazyIconURL;
}


@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (nonatomic) BOOL forceHideDisclosureIndicator; // ivar: _forceHideDisclosureIndicator
@property (nonatomic) BOOL isCopyable;
@property (nonatomic) BOOL isCopyable; // ivar: _isCopyable
@property (retain, nonatomic) NSURL *lazyIconURL;
@property (retain, nonatomic) UILongPressGestureRecognizer *longTapRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longTapRecognizer; // ivar: _longTapRecognizer
@property (nonatomic) BOOL reusedCell; // ivar: _reusedCell
@property (retain, nonatomic) PSSpecifier *specifier; // ivar: _specifier
@property (nonatomic) NSInteger type; // ivar: _type


+(CGFloat)defaultCellHeight;
+(Class)cellClassForSpecifier:(id)arg0 ;
+(NSInteger)cellStyle;
+(NSInteger)cellTypeFromString:(id)arg0 ;
+(id)reuseIdentifierForBasicCellTypes:(NSInteger)arg0 ;
+(id)reuseIdentifierForClassAndType:(NSInteger)arg0 ;
+(id)reuseIdentifierForSpecifier:(id)arg0 ;
+(id)stringFromCellType:(NSInteger)arg0 ;
-(BOOL)canBeChecked;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canReload;
-(BOOL)cellEnabled;
-(BOOL)isChecked;
-(BOOL)modernLayoutEnabled;
-(BOOL)shouldUseModernLayout;
-(CGFloat)textFieldOffset;
-(SEL)action;
-(SEL)cellAction;
-(id)_automationID;
-(id)_checkmarkImage:(BOOL)arg0 ;
-(id)_contentString;
-(id)_copyableText;
-(id)_disclosureChevronImage:(BOOL)arg0 ;
-(id)_urlSession;
-(id)blankIcon;
-(id)cellTarget;
-(id)getIcon;
-(id)getLazyIcon;
-(id)getLazyIconID;
-(id)iconImageView;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)lazyIconQueue:(id)arg0 ;
-(id)scriptingInfoWithChildren;
-(id)target;
-(id)title;
-(id)titleLabel;
-(id)titleTextLabel;
-(id)value;
-(id)valueLabel;
-(void)_invalidateHighlightContext;
-(void)_updateAccessoryTypeForSpecifier:(id)arg0 ;
-(void)cellRemovedFromView;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)forceSynchronousIconLoadOnNextIconLoad;
-(void)highlightCellForDuration:(CGFloat)arg0 animateUnighlight:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)longPressed:(id)arg0 ;
-(void)prepareForReuse;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)reloadWithSpecifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)setAction:(SEL)arg0 ;
-(void)setAlignment:(int)arg0 ;
-(void)setCellAction:(SEL)arg0 ;
-(void)setCellEnabled:(BOOL)arg0 ;
-(void)setCellTarget:(id)arg0 ;
-(void)setChecked:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setIcon:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setShouldHideTitle:(BOOL)arg0 ;
-(void)setTarget:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setValue:(id)arg0 ;
-(void)setValueChangedTarget:(id)arg0 action:(SEL)arg1 specifier:(id)arg2 ;
-(void)setupModernLayoutConstraints;


@end


#endif