// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRILONGPRESSBUTTONCONFIGURATION_H
#define SIRILONGPRESSBUTTONCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SiriLongPressButtonConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger buttonIdentifer; // ivar: _buttonIdentifer
@property (nonatomic) NSInteger longPressBehavior; // ivar: _longPressBehavior
@property (readonly, nonatomic) CGFloat longPressInterval;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithButtonIdentifier:(NSInteger)arg0 ;


@end


#endif