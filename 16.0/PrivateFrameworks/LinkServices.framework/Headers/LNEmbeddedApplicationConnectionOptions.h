// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNEMBEDDEDAPPLICATIONCONNECTIONOPTIONS_H
#define LNEMBEDDEDAPPLICATIONCONNECTIONOPTIONS_H



#import "LNConnectionOptions.h"

@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions

@property (nonatomic) BOOL sceneless; // ivar: _sceneless
@property (nonatomic) BOOL suspended; // ivar: _suspended


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif