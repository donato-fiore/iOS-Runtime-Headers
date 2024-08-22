// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDISCOVERYCARDVIEWTEMPLATEINFORMATION_H
#define PKDISCOVERYCARDVIEWTEMPLATEINFORMATION_H


#import <Foundation/Foundation.h>


@interface PKDiscoveryCardViewTemplateInformation : NSObject

@property (nonatomic) NSInteger cardSize; // ivar: _cardSize
@property (nonatomic) NSInteger displayType; // ivar: _displayType
@property (nonatomic) NSInteger largeCardTemplate; // ivar: _largeCardTemplate
@property (nonatomic) NSInteger miniCardTemplate; // ivar: _miniCardTemplate


-(id)initWithMiniCardTemplate:(NSInteger)arg0 largeCardTemplate:(NSInteger)arg1 cardSize:(NSInteger)arg2 displayType:(NSInteger)arg3 ;


@end


#endif