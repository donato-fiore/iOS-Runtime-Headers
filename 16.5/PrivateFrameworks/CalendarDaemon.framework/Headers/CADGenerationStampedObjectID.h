// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADGENERATIONSTAMPEDOBJECTID_H
#define CADGENERATIONSTAMPEDOBJECTID_H

@class CADObjectID;



@interface CADGenerationStampedObjectID : CADObjectID

@property (readonly, nonatomic) int restoreGeneration; // ivar: _restoreGeneration


-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(id)initWithEntityType:(int)arg0 entityID:(int)arg1 databaseID:(int)arg2 generation:(int)arg3 ;
-(id)initWithEntityType:(int)arg0 entityID:(int)arg1 generation:(int)arg2 ;


@end


#endif