// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBMODELFIELDOPTIONQUERYABLE_H
#define HMBMODELFIELDOPTIONQUERYABLE_H



#import "HMBModelFieldOption.h"

@interface HMBModelFieldOptionQueryable : HMBModelFieldOption

@property (copy, nonatomic) id *decodingBlock; // ivar: _decodingBlock
@property (copy, nonatomic) id *descriptionBlock; // ivar: _descriptionBlock
@property (copy, nonatomic) id *encodingBlock; // ivar: _encodingBlock


// -(id)initWithEncodingBlock:(id)arg0 decodingBlock:(unk)arg1 descriptionBlock:(id)arg2  ;
-(void)applyTo:(id)arg0 ;


@end


#endif