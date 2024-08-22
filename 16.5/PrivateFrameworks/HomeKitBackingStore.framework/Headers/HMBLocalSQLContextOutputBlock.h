// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBLOCALSQLCONTEXTOUTPUTBLOCK_H
#define HMBLOCALSQLCONTEXTOUTPUTBLOCK_H

@class HMFObject, HMFActivity, NSString;
@protocol HMFLogging;


#import "HMBLocalSQLContext.h"

@interface HMBLocalSQLContextOutputBlock : HMFObject <HMFLogging>



@property (readonly, nonatomic) HMFActivity *activity; // ivar: _activity
@property (nonatomic) NSUInteger blockRow; // ivar: _blockRow
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (weak, nonatomic) HMBLocalSQLContext *owner; // ivar: _owner
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger zoneRow; // ivar: _zoneRow


+(id)logCategory;
-(id)abort;
-(id)commit:(id)arg0 ;
-(id)initWithOwner:(id)arg0 identifier:(id)arg1 zoneRow:(NSUInteger)arg2 blockRow:(NSUInteger)arg3 ;
-(id)logIdentifier;
-(id)updateModelID:(id)arg0 modelEncoding:(NSUInteger)arg1 modelData:(id)arg2 ;


@end


#endif