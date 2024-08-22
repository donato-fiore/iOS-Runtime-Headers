// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTREDEEMVIEWCONTROLLER_H
#define SUSCRIPTREDEEMVIEWCONTROLLER_H

@class NSString;


#import "SUScriptViewController.h"

@interface SUScriptRedeemViewController : SUScriptViewController {
    NSInteger _category;
    NSString *_initialCode;
}


@property (copy, nonatomic) NSString *initialCode;
@property (readonly, nonatomic) NSInteger redeemCategoryApps;
@property (readonly, nonatomic) NSInteger redeemCategoryBooks;
@property (readonly, nonatomic) NSInteger redeemCategoryMedia;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)newNativeViewController;
-(id)scriptAttributeKeys;
-(void)setRedeemStyle:(NSInteger)arg0 ;


@end


#endif