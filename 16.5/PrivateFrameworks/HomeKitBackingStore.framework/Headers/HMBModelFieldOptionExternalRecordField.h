// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBMODELFIELDOPTIONEXTERNALRECORDFIELD_H
#define HMBMODELFIELDOPTIONEXTERNALRECORDFIELD_H

@class NSString;


#import "HMBModelFieldOption.h"

@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption

@property (readonly, nonatomic) BOOL encrypted; // ivar: _encrypted
@property (readonly, nonatomic) NSString *fieldName; // ivar: _fieldName


-(id)initWithExternalRecordField:(id)arg0 encrypted:(BOOL)arg1 ;
-(void)applyTo:(id)arg0 ;


@end


#endif