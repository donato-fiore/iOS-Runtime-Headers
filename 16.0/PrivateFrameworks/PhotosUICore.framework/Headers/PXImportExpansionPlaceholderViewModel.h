// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMPORTEXPANSIONPLACEHOLDERVIEWMODEL_H
#define PXIMPORTEXPANSIONPLACEHOLDERVIEWMODEL_H

@class NSDate;


#import "PXImportItemViewModel.h"

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel

@property (readonly, nonatomic) NSDate *placeholderDate; // ivar: _placeholderDate
@property (retain, nonatomic) id *placeholderUUID; // ivar: _placeholderUUID


+(id)sharedInstance;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToImportPlaceholderViewModel:(id)arg0 ;
-(NSInteger)badgeType;
-(NSUInteger)hash;
-(id)description;
-(id)fileCreationDate;
-(id)fileName;
-(id)initWithPlaceholderDate:(id)arg0 ;
-(id)uuid;


@end


#endif