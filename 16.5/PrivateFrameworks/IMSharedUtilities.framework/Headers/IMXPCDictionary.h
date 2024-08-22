// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMXPCDICTIONARY_H
#define IMXPCDICTIONARY_H



#import "IMXPCObject.h"

@interface IMXPCDictionary : IMXPCObject



+(struct _xpc_type_s *)type;
-(id)dictionaryForKey:(char *)arg0 ;
-(id)initWithDictionary:(id)arg0 key:(char *)arg1 ;


@end


#endif