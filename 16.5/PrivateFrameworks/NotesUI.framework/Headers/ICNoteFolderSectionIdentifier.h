// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTEFOLDERSECTIONIDENTIFIER_H
#define ICNOTEFOLDERSECTIONIDENTIFIER_H

@class NSManagedObjectID;


#import "ICNoteSectionIdentifier.h"

@interface ICNoteFolderSectionIdentifier : ICNoteSectionIdentifier

@property (readonly, nonatomic) NSManagedObjectID *noteContainerObjectID; // ivar: _noteContainerObjectID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)init;
-(id)initWithNoteContainerObjectID:(id)arg0 ;


@end


#endif