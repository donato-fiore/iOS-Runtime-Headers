// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCFACEDETAILCOMPLICATIONCELLPROVIDER_H
#define NTKCFACEDETAILCOMPLICATIONCELLPROVIDER_H

@class UITableView;
@protocol NTKComplicationPickerListProvider;

#import <Foundation/Foundation.h>


@interface NTKCFaceDetailComplicationCellProvider : NSObject

@property (retain, nonatomic) NSObject<NTKComplicationPickerListProvider> *listProvider; // ivar: _listProvider
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(id)cellForItem:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initWithTableView:(id)arg0 listProvider:(id)arg1 ;


@end


#endif