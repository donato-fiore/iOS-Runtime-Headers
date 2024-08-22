// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCOREMODELPAIRING_H
#define AVTCOREMODELPAIRING_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVTCoreModelPairing : NSObject

@property (readonly, copy, nonatomic) NSString *localizedPairTitle; // ivar: _localizedPairTitle
@property (readonly, copy, nonatomic) NSString *localizedPairedDescription; // ivar: _localizedPairedDescription
@property (readonly, copy, nonatomic) NSString *localizedPairedTitle; // ivar: _localizedPairedTitle
@property (readonly, copy, nonatomic) NSString *localizedUnpairTitle; // ivar: _localizedUnpairTitle
@property (readonly, copy, nonatomic) NSString *localizedUnpairedDescription; // ivar: _localizedUnpairedDescription
@property (readonly, nonatomic) NSInteger pairedCategory; // ivar: _pairedCategory


-(id)description;
-(id)initWithPairedCategory:(NSInteger)arg0 pairedTitle:(id)arg1 pairTitle:(id)arg2 unpairTitle:(id)arg3 pairedDescription:(id)arg4 unpairedDescription:(id)arg5 ;


@end


#endif