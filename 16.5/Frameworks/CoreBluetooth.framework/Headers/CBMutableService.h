// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBMUTABLESERVICE_H
#define CBMUTABLESERVICE_H

@class NSNumber, NSArray;


#import "CBService.h"

@interface CBMutableService : CBService

@property (retain) NSNumber *ID; // ivar: _ID
@property (retain) NSArray *characteristics;
@property (retain) NSArray *includedServices;


-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithType:(id)arg0 primary:(BOOL)arg1 ;
-(void)dealloc;
-(void)handlePowerNotOn;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif