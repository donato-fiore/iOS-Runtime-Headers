// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIPATHACTION_H
#define TIPATHACTION_H



#import "TIUserAction.h"

@interface TIPathAction : TIUserAction

@property (readonly, nonatomic) NSUInteger syllableCount; // ivar: _syllableCount


-(id)initWithCoder:(id)arg0 ;
-(id)initWithSyllableCount:(NSUInteger)arg0 keyboardState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif