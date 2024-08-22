// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMTELEVISIONPROFILE_H
#define HMTELEVISIONPROFILE_H

@class NSString, NSArray;
@protocol _HMTelevisionProfileDelegate, HMTelevisionProfileDelegate;


#import "HMAccessoryProfile.h"

@interface HMTelevisionProfile : HMAccessoryProfile <_HMTelevisionProfileDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMTelevisionProfileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *mediaSourceDisplayOrder;
@property (readonly) BOOL mediaSourceDisplayOrderModifiable;
@property (readonly) Class superclass;


-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(id)initWithTelevisionService:(id)arg0 linkedServices:(id)arg1 ;
-(void)televisionProfileDidUpdateSourceDisplayOrder:(id)arg0 ;
-(void)updateMediaSourceDisplayOrder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif