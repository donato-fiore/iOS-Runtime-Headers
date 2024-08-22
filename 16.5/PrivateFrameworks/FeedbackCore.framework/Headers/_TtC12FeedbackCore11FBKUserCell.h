// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12FEEDBACKCORE11FBKUSERCELL_H
#define _TTC12FEEDBACKCORE11FBKUSERCELL_H

@class UITableViewCell, NSString;
@protocol FBKDiffableCell;



@interface _TtC12FeedbackCore11FBKUserCell : UITableViewCell <FBKDiffableCell>

 {
    ? itemIdentifier;
}


@property (nonatomic, copy) NSString *itemIdentifier;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)updateWithUser:(id)arg0 ;


@end


#endif