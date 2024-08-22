// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURESOLVEDSOURCE_H
#define NURESOLVEDSOURCE_H



#import "NUSource.h"
#import "NUSourceDefinition.h"

@interface NUResolvedSource : NUSource

@property (retain) NUSourceDefinition *resolvedSourceDefinition; // ivar: _resolvedSourceDefinition


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)sourceDefinition:(*id)arg0 ;


@end


#endif