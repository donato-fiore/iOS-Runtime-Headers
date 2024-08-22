// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNIOSABSAVECONTEXT_H
#define CNIOSABSAVECONTEXT_H

@class NSMutableDictionary, NSMutableArray, NSMapTable;

#import <Foundation/Foundation.h>

#import "CNSaveRequest.h"
#import "CNMutableSaveResponse.h"

@interface CNiOSABSaveContext : NSObject {
    *void _addressBook;
}


@property (retain, nonatomic) NSMutableDictionary *abAccountsByIdentifier; // ivar: _abAccountsByIdentifier
@property (retain, nonatomic) NSMutableDictionary *abGroupsByIdentifier; // ivar: _abGroupsByIdentifier
@property (retain, nonatomic) NSMutableDictionary *abPersonsByIdentifier; // ivar: _abPersonsByIdentifier
@property (retain, nonatomic) NSMutableDictionary *abSourcesByIdentifier; // ivar: _abSourcesByIdentifier
@property (readonly, nonatomic) *void addressBook;
@property (retain, nonatomic) NSMutableArray *contactIdentifiersNeedingMetadataPurge; // ivar: _contactIdentifiersNeedingMetadataPurge
@property (readonly, nonatomic) NSMapTable *contactIndicesByInstance; // ivar: _contactIndicesByInstance
@property (readonly, nonatomic) NSMapTable *containerIndicesByInstance; // ivar: _containerIndicesByInstance
@property (readonly, nonatomic) NSMapTable *groupIndicesByInstance; // ivar: _groupIndicesByInstance
@property (readonly, nonatomic) CNSaveRequest *saveRequest; // ivar: _saveRequest
@property (readonly, nonatomic) CNMutableSaveResponse *saveResponse; // ivar: _saveResponse


-(id)indexPathForContactInstance:(id)arg0 ;
-(id)indexPathForContainerInstance:(id)arg0 ;
-(id)indexPathForGroupInstance:(id)arg0 ;
-(id)initWithSaveRequest:(id)arg0 response:(id)arg1 addressBook:(*void)arg2 ;
-(void)_populateSaveRequestIndexTables;
-(void)dealloc;


@end


#endif