// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPMACHINEIDLIST_H
#define TPMACHINEIDLIST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TPMachineIDList : NSObject

@property (readonly) NSArray *entries; // ivar: _entries


-(id)description;
-(id)entryFor:(id)arg0 ;
-(id)initWithEntries:(id)arg0 ;
-(id)machineIDsInStatus:(NSUInteger)arg0 ;


@end


#endif