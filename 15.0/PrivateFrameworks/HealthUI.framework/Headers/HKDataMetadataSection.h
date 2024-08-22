// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDATAMETADATASECTION_H
#define HKDATAMETADATASECTION_H

@protocol HKDataMetadataSectionProtocol;

#import <Foundation/Foundation.h>


@interface HKDataMetadataSection : NSObject <HKDataMetadataSectionProtocol>





-(NSUInteger)numberOfRowsInSection;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)sectionFooter;
-(id)sectionTitle;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;
-(void)willDisplayCell:(id)arg0 forIndex:(NSUInteger)arg1 tableView:(id)arg2 ;


@end


#endif