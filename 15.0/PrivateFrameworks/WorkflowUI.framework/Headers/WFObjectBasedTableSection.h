// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFOBJECTBASEDTABLESECTION_H
#define WFOBJECTBASEDTABLESECTION_H



#import "WFTableSection.h"

@interface WFObjectBasedTableSection : WFTableSection

@property (readonly, nonatomic) Class cellClass; // ivar: _cellClass
@property (readonly, nonatomic) NSInteger cellStyle; // ivar: _cellStyle
@property (readonly, nonatomic) id *configurationBlock; // ivar: _configurationBlock


-(id)initWithCellClass:(Class)arg0 cellStyle:(NSInteger)arg1 representedObjects:(id)arg2 configurationBlock:(id)arg3 ;
-(void)addRepresentedObject:(id)arg0 ;
-(void)setRepresentedObjects:(id)arg0 ;


@end


#endif