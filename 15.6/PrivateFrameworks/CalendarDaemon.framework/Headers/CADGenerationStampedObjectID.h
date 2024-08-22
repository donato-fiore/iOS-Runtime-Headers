// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADGENERATIONSTAMPEDOBJECTID_H
#define CADGENERATIONSTAMPEDOBJECTID_H

@class CADObjectID;



@interface CADGenerationStampedObjectID : CADObjectID

@property (readonly, nonatomic) int restoreGeneration; // ivar: _restoreGeneration


-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(id)initWithEntityType:(int)arg0 entityID:(int)arg1 generation:(int)arg2 ;


@end


#endif