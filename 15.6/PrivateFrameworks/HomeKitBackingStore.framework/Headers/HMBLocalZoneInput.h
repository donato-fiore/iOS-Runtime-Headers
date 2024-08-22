// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBLOCALZONEINPUT_H
#define HMBLOCALZONEINPUT_H

@class HMFObject, NSString;
@protocol HMFLogging;


#import "HMBLocalSQLContextInputBlock.h"
#import "HMBLocalZone.h"

@interface HMBLocalZoneInput : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMBLocalSQLContextInputBlock *inputBlock; // ivar: _inputBlock
@property (readonly) HMBLocalZone *localZone; // ivar: _localZone
@property NSUInteger stagedChangesCount; // ivar: _stagedChangesCount
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)stageRemovalForModelWithID:(id)arg0 error:(*id)arg1 ;
-(id)attributeDescriptions;
-(id)commitWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithLocalZone:(id)arg0 inputBlock:(id)arg1 ;
-(id)logIdentifier;
-(void)abort;
-(void)dealloc;


@end


#endif