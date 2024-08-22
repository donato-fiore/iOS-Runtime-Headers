// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRSETHILITEMODEMESSAGE_H
#define MRSETHILITEMODEMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRSetHiliteModeMessage : MRProtocolMessage

@property (readonly, nonatomic) BOOL hiliteMode;


-(NSUInteger)type;
-(id)initWithHiliteMode:(BOOL)arg0 ;


@end


#endif