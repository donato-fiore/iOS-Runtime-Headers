// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRINSIGHTSCONTEXT_H
#define CRINSIGHTSCONTEXT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "CRCameraReader.h"

@interface CRInsightsContext : NSObject

@property (weak, nonatomic) CRCameraReader *cameraReader; // ivar: _cameraReader
@property (retain, nonatomic) NSMutableDictionary *info; // ivar: _info


-(id)description;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif