// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RADIOLOADSTOREBAGREQUEST_H
#define RADIOLOADSTOREBAGREQUEST_H



#import "RadioRequest.h"

@interface RadioLoadStoreBagRequest : RadioRequest

@property (nonatomic) BOOL ignoresRadioDiskCache; // ivar: _ignoresRadioDiskCache


-(void)loadStoreBagWithOptions:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif