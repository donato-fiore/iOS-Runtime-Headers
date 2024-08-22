// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNMACAPPLICATIONCONNECTIONOPTIONS_H
#define LNMACAPPLICATIONCONNECTIONOPTIONS_H



#import "LNConnectionOptions.h"

@interface LNMacApplicationConnectionOptions : LNConnectionOptions

@property (nonatomic, getter=isBackground) BOOL background; // ivar: _background


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif