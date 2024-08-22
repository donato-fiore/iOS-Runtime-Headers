// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCLASSICTAPBACK_H
#define IMCLASSICTAPBACK_H



#import "IMTapback.h"

@interface IMClassicTapback : IMTapback



+(BOOL)isValidAssociatedMessageType:(NSInteger)arg0 ;
+(BOOL)isValidRepresentation:(id)arg0 ;
-(id)actionString;
-(id)initWithAssociatedMessageType:(NSInteger)arg0 ;


@end


#endif