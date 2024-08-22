// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSPCONTAINEREDITCONTENTUPDATE_H
#define _MSPCONTAINEREDITCONTENTUPDATE_H

@class MSPContainerEdit, NSString;
@protocol MSPContainerEditContentUpdate, MSPImmutableObject, MSPMutableObject;



@interface _MSPContainerEditContentUpdate : MSPContainerEdit <MSPContainerEditContentUpdate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MSPImmutableObject> *updatedImmutableObject; // ivar: _updatedImmutableObject
@property (readonly, nonatomic) NSObject<MSPMutableObject> *updatedObject; // ivar: _updatedObject


-(id)initWithUpdatedImmutableObject:(id)arg0 ;
-(id)initWithUpdatedObject:(id)arg0 ;
-(void)useImmutableObjectsFromMap:(id)arg0 intermediateMutableObjectTransferBlock:(id)arg1 ;


@end


#endif