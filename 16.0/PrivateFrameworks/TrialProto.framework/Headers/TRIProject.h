// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPROJECT_H
#define TRIPROJECT_H



#import "TRIPBMessage.h"

@interface TRIProject : TRIPBMessage



+(id)descriptor;
+(id)projectNameFromId:(unsigned int)arg0 ;
+(int)projectIdFromName:(id)arg0 ;


@end


#endif