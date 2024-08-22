// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKSEPCLIENTTOKEN_H
#define TKSEPCLIENTTOKEN_H



#import "TKClientToken.h"

@interface TKSEPClientToken : TKClientToken



+(BOOL)handlesTokenID:(id)arg0 ;
+(id)builtinTokenIDs;
-(id)initWithTokenID:(id)arg0 serverEndpoint:(id)arg1 targetUID:(id)arg2 ;


@end


#endif