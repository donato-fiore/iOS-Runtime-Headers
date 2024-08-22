// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKINFORMATIONCELL_H
#define FBKINFORMATIONCELL_H

@class UITableViewCell, NSString;
@protocol FBKDiffableCell;


#import "FBKQuestion.h"

@interface FBKInformationCell : UITableViewCell <FBKDiffableCell>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *itemIdentifier; // ivar: itemIdentifier
@property (retain, nonatomic) FBKQuestion *question; // ivar: _question
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif