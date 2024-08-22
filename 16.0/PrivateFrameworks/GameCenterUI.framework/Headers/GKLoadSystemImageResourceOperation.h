// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKLOADSYSTEMIMAGERESOURCEOPERATION_H
#define GKLOADSYSTEMIMAGERESOURCEOPERATION_H

@class NSString;


#import "GKLoadResourceOperation.h"

@interface GKLoadSystemImageResourceOperation : GKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName


-(id)initWithSystemImageName:(id)arg0 ;
-(void)main;


@end


#endif