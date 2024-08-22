// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWDROPPROPOSAL_H
#define UICOLLECTIONVIEWDROPPROPOSAL_H



#import "UIDropProposal.h"

@interface UICollectionViewDropProposal : UIDropProposal

@property (nonatomic) NSInteger intent; // ivar: _intent


-(NSInteger)dropLocation;
-(id)description;
-(id)initWithDropOperation:(NSUInteger)arg0 ;
-(id)initWithDropOperation:(NSUInteger)arg0 dropLocation:(NSInteger)arg1 ;
-(id)initWithDropOperation:(NSUInteger)arg0 intent:(NSInteger)arg1 ;


@end


#endif