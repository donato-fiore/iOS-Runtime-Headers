// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRNOWPLAYINGCONTROLLERDESTINATION_H
#define MRNOWPLAYINGCONTROLLERDESTINATION_H



#import "MRDestination.h"
#import "MRPlayerPath.h"

@interface MRNowPlayingControllerDestination : MRDestination

@property (nonatomic) BOOL isEndpointSet; // ivar: _isEndpointSet
@property (retain, nonatomic) MRPlayerPath *resolvedPlayerPath;
@property (retain, nonatomic) MRPlayerPath *unresolvedPlayerPath; // ivar: _unresolvedPlayerPath


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithConfiguration:(id)arg0 ;
-(void)setEndpoint:(id)arg0 ;


@end


#endif