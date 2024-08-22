// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYPARTICIPANTDATASOURCE_H
#define PXSHAREDLIBRARYPARTICIPANTDATASOURCE_H

@class NSSet, NSArray;


#import "PXSectionedDataSource.h"

@interface PXSharedLibraryParticipantDataSource : PXSectionedDataSource

@property (readonly, nonatomic) NSSet *emailAddresses;
@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) NSSet *participantAddresses;
@property (readonly, nonatomic) NSArray *participantImageCombinerItems;
@property (retain, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSSet *phoneNumbers;


-(BOOL)canAddParticipants;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfParticipants;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)_initWithParticipants:(id)arg0 ;
-(id)itemAtIndex:(NSInteger)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectsInIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif