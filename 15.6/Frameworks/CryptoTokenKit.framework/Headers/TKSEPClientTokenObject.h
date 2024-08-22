// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKSEPCLIENTTOKENOBJECT_H
#define TKSEPCLIENTTOKENOBJECT_H



#import "TKClientTokenObject.h"
#import "TKSEPKey.h"

@interface TKSEPClientTokenObject : TKClientTokenObject

@property (readonly, nonatomic) TKSEPKey *key; // ivar: _key


-(BOOL)deleteWithError:(*id)arg0 ;
-(id)initWithSession:(id)arg0 key:(id)arg1 error:(*id)arg2 ;
-(id)operation:(NSInteger)arg0 data:(id)arg1 algorithms:(id)arg2 parameters:(id)arg3 error:(*id)arg4 ;
-(id)withError:(*id)arg0 invoke:(id)arg1 ;


@end


#endif