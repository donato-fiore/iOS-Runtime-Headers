// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDATAMETADATASIMPLESECTION_H
#define HKDATAMETADATASIMPLESECTION_H

@class NSMutableArray, NSString;
@protocol HKDataMetadataSectionDataReceiver;


#import "HKDataMetadataSection.h"

@interface HKDataMetadataSimpleSection : HKDataMetadataSection <HKDataMetadataSectionDataReceiver>



@property (retain, nonatomic) NSMutableArray *rows; // ivar: _rows
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(NSUInteger)numberOfRowsInSection;
-(id)_rowTitles;
-(id)_valueForRowWithTitle:(id)arg0 ;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)initWithTitle:(id)arg0 ;
-(id)sectionTitle;
-(void)addText:(id)arg0 detail:(id)arg1 ;


@end


#endif