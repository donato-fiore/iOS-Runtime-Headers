// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDISCOVERYCARDVIEWTEMPLATEINFORMATION_H
#define PKDISCOVERYCARDVIEWTEMPLATEINFORMATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKDiscoveryCardViewTemplateInformation : NSObject <NSCopying>



@property (nonatomic) NSInteger cardSize; // ivar: _cardSize
@property (nonatomic) NSInteger displayType; // ivar: _displayType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCardSize:(NSInteger)arg0 displayType:(NSInteger)arg1 ;
-(void)updateCardSize:(NSInteger)arg0 ;


@end


#endif