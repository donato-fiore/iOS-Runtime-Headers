// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSSEARCHRESULTSCELL_H
#define PSSEARCHRESULTSCELL_H

@class UITableViewCell;



@interface PSSearchResultsCell : UITableViewCell

@property (nonatomic) BOOL shouldIndentContent; // ivar: _shouldIndentContent
@property (nonatomic) BOOL shouldIndentSeparator; // ivar: _shouldIndentSeparator


+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif