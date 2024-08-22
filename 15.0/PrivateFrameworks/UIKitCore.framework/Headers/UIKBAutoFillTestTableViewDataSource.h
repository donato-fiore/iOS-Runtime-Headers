// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBAUTOFILLTESTTABLEVIEWDATASOURCE_H
#define UIKBAUTOFILLTESTTABLEVIEWDATASOURCE_H

@class NSMutableDictionary;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface UIKBAutoFillTestTableViewDataSource : NSObject <NSCoding>

 {
    NSMutableDictionary *_rowCountMap;
    NSMutableDictionary *_visibleCellDataMap;
    NSMutableDictionary *_headerDataMap;
    NSMutableDictionary *_footerDataMap;
}


@property (readonly, nonatomic) NSInteger numberOfSections;


-(CGFloat)heightForFooterInSection:(NSInteger)arg0 ;
-(CGFloat)heightForHeaderInSection:(NSInteger)arg0 ;
-(CGFloat)heightForRowAtIndexPath:(id)arg0 ;
-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(id)cellForRowAtIndexPath:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)titleForFooterInSection:(NSInteger)arg0 ;
-(id)titleForHeaderInSection:(NSInteger)arg0 ;
-(id)viewForFooterInSection:(NSInteger)arg0 ;
-(id)viewForHeaderInSection:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCellData:(id)arg0 forRowAtIndexPath:(id)arg1 ;
-(void)setFooterData:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)setHeaderData:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)setNumberOfRows:(NSInteger)arg0 forSection:(NSInteger)arg1 ;


@end


#endif