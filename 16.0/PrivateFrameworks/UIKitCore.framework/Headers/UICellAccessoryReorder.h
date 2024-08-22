// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICELLACCESSORYREORDER_H
#define UICELLACCESSORYREORDER_H



#import "UICellAccessory.h"

@interface UICellAccessoryReorder : UICellAccessory

@property (nonatomic) BOOL showsVerticalSeparator; // ivar: _showsVerticalSeparator


+(BOOL)supportsSecureCoding;
-(BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_systemType;
-(NSInteger)_systemTypePlacementForHeader:(BOOL)arg0 ;
-(id)_identifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif