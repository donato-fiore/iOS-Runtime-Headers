// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSSPECIFIER_H
#define PSSPECIFIER_H

@class NSMutableDictionary, NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface PSSpecifier : NSObject {
    SEL getter;
    SEL setter;
    SEL action;
    SEL cancel;
    NSInteger keyboardType;
    NSInteger autoCapsType;
    NSInteger autoCorrectionType;
    NSUInteger textFieldType;
    NSMutableDictionary *_properties;
}


@property (nonatomic) SEL buttonAction; // ivar: _buttonAction
@property (nonatomic) NSInteger cellType; // ivar: cellType
@property (nonatomic) SEL confirmationAction; // ivar: _confirmationAction
@property (nonatomic) SEL confirmationAlternateAction; // ivar: _confirmationAlternateAction
@property (nonatomic) SEL confirmationCancelAction; // ivar: _confirmationCancelAction
@property (nonatomic) SEL controllerLoadAction; // ivar: _controllerLoadAction
@property (nonatomic) Class detailControllerClass; // ivar: detailControllerClass
@property (nonatomic) Class editPaneClass; // ivar: editPaneClass
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDictionary *shortTitleDictionary; // ivar: _shortTitleDict
@property (nonatomic) BOOL showContentString; // ivar: _showContentString
@property (weak, nonatomic) id *target; // ivar: target
@property (retain, nonatomic) NSDictionary *titleDictionary; // ivar: _titleDict
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo
@property (retain, nonatomic) NSArray *values; // ivar: _values
@property (weak, nonatomic) id *weakUserInfo; // ivar: _weakUserInfo


+(NSInteger)autoCapsTypeForString:(id)arg0 ;
+(NSInteger)autoCorrectionTypeForNumber:(id)arg0 ;
+(NSInteger)keyboardTypeForString:(id)arg0 ;
+(id)deleteButtonSpecifierWithName:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
+(id)emptyGroupSpecifier;
+(id)groupSpecifierWithID:(id)arg0 ;
+(id)groupSpecifierWithID:(id)arg0 name:(id)arg1 ;
+(id)groupSpecifierWithName:(id)arg0 ;
+(id)preferenceSpecifierNamed:(id)arg0 target:(id)arg1 set:(SEL)arg2 get:(SEL)arg3 detail:(Class)arg4 cell:(NSInteger)arg5 edit:(Class)arg6 ;
+(id)specifierWithSpecifier:(id)arg0 ;
-(BOOL)hasValidGetter;
-(BOOL)hasValidSetter;
-(BOOL)isEqualToSpecifier:(id)arg0 ;
-(NSInteger)titleCompare:(id)arg0 ;
-(SEL)legacyAction;
-(SEL)legacyCancel;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 target:(id)arg1 set:(SEL)arg2 get:(SEL)arg3 detail:(Class)arg4 cell:(NSInteger)arg5 edit:(Class)arg6 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)performGetter;
-(id)properties;
-(id)propertyForKey:(id)arg0 ;
-(void)_addLinkSpec:(id)arg0 ;
-(void)addFooterHyperlinkWithRange:(struct _NSRange )arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)addFooterHyperlinkWithRange:(struct _NSRange )arg0 url:(id)arg1 ;
-(void)loadValuesAndTitlesFromDataSource;
-(void)performButtonAction;
-(void)performConfirmationAction;
-(void)performConfirmationAlternateAction;
-(void)performConfirmationCancelAction;
-(void)performControllerLoadAction;
-(void)performLegacyAction;
-(void)performSetterWithValue:(id)arg0 ;
-(void)removePropertyForKey:(id)arg0 ;
-(void)setKeyboardType:(NSInteger)arg0 autoCaps:(NSInteger)arg1 autoCorrection:(NSInteger)arg2 ;
-(void)setLegacyAction:(SEL)arg0 ;
-(void)setLegacyCancel:(SEL)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setProperties:(id)arg0 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setupIconImageWithBundle:(id)arg0 ;
-(void)setupIconImageWithPath:(id)arg0 ;


@end


#endif