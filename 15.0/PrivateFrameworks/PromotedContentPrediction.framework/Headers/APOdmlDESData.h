// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLDESDATA_H
#define APODMLDESDATA_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "APOdmlVector.h"

@interface APOdmlDESData : NSObject

@property (retain, nonatomic) APOdmlVector *appVector; // ivar: _appVector
@property (retain, nonatomic) NSNumber *pTTRLogit; // ivar: _pTTRLogit


-(id)init;
-(id)recordData;
-(void)collectODMLResponse:(id)arg0 ;
-(void)overrideVector:(id)arg0 vector:(id)arg1 type:(id)arg2 ;


@end


#endif