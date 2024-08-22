// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRINAMESPACE_H
#define TRINAMESPACE_H



#import "TRIPBMessage.h"

@interface TRINamespace : TRIPBMessage



+(id)descriptor;
+(id)namespaceNameFromId:(unsigned int)arg0 ;
+(int)namespaceIdFromName:(id)arg0 ;


@end


#endif