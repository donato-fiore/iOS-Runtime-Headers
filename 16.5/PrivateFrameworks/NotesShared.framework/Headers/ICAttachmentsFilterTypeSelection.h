// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTSFILTERTYPESELECTION_H
#define ICATTACHMENTSFILTERTYPESELECTION_H



#import "ICFilterTypeSelection.h"

@interface ICAttachmentsFilterTypeSelection : ICFilterTypeSelection

@property (nonatomic) NSUInteger selectionType; // ivar: _selectionType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToICAttachmentsFilterTypeSelection:(id)arg0 ;
-(NSInteger)filterType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)filterName;
-(id)initWithAttachmentSection:(short)arg0 ;
-(id)initWithSelectionType:(NSUInteger)arg0 ;
-(id)rawFilterValue;


@end


#endif