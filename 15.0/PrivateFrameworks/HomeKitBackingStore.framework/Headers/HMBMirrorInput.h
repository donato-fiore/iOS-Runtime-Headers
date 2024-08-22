// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBMIRRORINPUT_H
#define HMBMIRRORINPUT_H

@class HMFObject, HMFActivity, NSString;
@protocol HMFLogging;


#import "HMBLocalSQLContextInputBlock.h"
#import "HMBLocalZone.h"

@interface HMBMirrorInput : HMFObject <HMFLogging>



@property (readonly, nonatomic) HMFActivity *activity; // ivar: _activity
@property (readonly, nonatomic) HMBLocalSQLContextInputBlock *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly) Class superclass;


+(id)logCategory;
-(id)abort;
-(id)commitWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithLocalZone:(id)arg0 block:(id)arg1 ;
-(id)logIdentifier;
-(id)removeModelWithExternalID:(id)arg0 ;
-(id)removeModelWithModelID:(id)arg0 ;
-(id)updateModel:(id)arg0 externalID:(id)arg1 externalData:(id)arg2 ;
-(void)dealloc;


@end


#endif