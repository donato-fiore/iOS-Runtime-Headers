// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBICONMODELSTORE_H
#define DBICONMODELSTORE_H

@class SBIconModelPropertyListFileStore, NSString;



@interface DBIconModelStore : SBIconModelPropertyListFileStore

@property (readonly, nonatomic) NSString *vehicleId; // ivar: _vehicleId


-(BOOL)saveCurrentIconState:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveDesiredIconState:(id)arg0 error:(*id)arg1 ;
-(id)_iconListsByFlatteningPages:(id)arg0 ;
-(id)initWithVehicleId:(id)arg0 ;
-(id)loadCurrentIconState:(*id)arg0 ;


@end


#endif