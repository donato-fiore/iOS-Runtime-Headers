// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FATABLEVIEWDECORATOR_H
#define FATABLEVIEWDECORATOR_H

@class NSString;
@protocol FATableViewProtocol, UITableViewDelegate, UITableViewDataSource;

#import <Foundation/Foundation.h>


@interface FATableViewDecorator : NSObject <FATableViewProtocol, UITableViewDelegate, UITableViewDataSource>



@property (weak, nonatomic) NSObject<UITableViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UITableViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<FATableViewProtocol> *tableView; // ivar: _tableView


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithTableView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)reloadData;
-(void)reloadRowsAtIndexPaths:(id)arg0 withRowAnimation:(NSInteger)arg1 ;


@end


#endif