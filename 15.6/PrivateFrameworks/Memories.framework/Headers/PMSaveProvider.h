// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMSAVEPROVIDER_H
#define PMSAVEPROVIDER_H


#import <Foundation/Foundation.h>

#import "VEKProduction.h"

@interface PMSaveProvider : NSObject

@property (retain, nonatomic) VEKProduction *production; // ivar: _production


-(id)initWithProduction:(id)arg0 ;
-(void)save:(BOOL)arg0 ;


@end


#endif