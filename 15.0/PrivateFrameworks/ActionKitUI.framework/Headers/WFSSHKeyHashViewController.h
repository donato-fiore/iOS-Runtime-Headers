// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSSHKEYHASHVIEWCONTROLLER_H
#define WFSSHKEYHASHVIEWCONTROLLER_H

@class UITableViewController, WFTableDataSource, NSString;



@interface WFSSHKeyHashViewController : UITableViewController

@property (readonly, nonatomic) WFTableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy, nonatomic) NSString *hashString; // ivar: _hashString


-(id)initWithHashString:(id)arg0 title:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif