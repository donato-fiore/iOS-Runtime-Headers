// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHPERSISTENTCHANGE_H
#define PHPERSISTENTCHANGE_H


#import <Foundation/Foundation.h>

#import "PHChange.h"
#import "PHPersistentChangeToken.h"

@interface PHPersistentChange : NSObject {
    PHChange *_change;
}


@property (readonly, nonatomic) PHPersistentChangeToken *changeToken; // ivar: _changeToken


-(id)changeDetailsForObjectType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)initWithChange:(id)arg0 ;


@end


#endif