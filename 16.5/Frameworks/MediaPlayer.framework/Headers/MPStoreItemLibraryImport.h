// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTOREITEMLIBRARYIMPORT_H
#define MPSTOREITEMLIBRARYIMPORT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "MPModelObject.h"

@interface MPStoreItemLibraryImport : NSObject

@property (readonly, nonatomic) BOOL addToCloudLibrary; // ivar: _addToCloudLibrary
@property (readonly, nonatomic) BOOL addToDeviceLibraryOnly; // ivar: _addToDeviceLibraryOnly
@property (readonly, nonatomic) NSArray *importElements; // ivar: _importElements
@property (readonly, nonatomic) MPModelObject *referralObject; // ivar: _referralObject


-(id)_initWithImportElements:(id)arg0 referralObject:(id)arg1 usingCloudLibraryDestination:(BOOL)arg2 localLibraryDestination:(BOOL)arg3 ;
-(id)initUsingLocalDeviceLibraryDestinationWithImportElements:(id)arg0 ;
-(id)initUsingLocalDeviceLibraryDestinationWithImportElements:(id)arg0 referralObject:(id)arg1 ;
-(id)initWithImportElements:(id)arg0 referralObject:(id)arg1 usingCloudLibraryDestination:(BOOL)arg2 ;
-(id)initWithImportElements:(id)arg0 usingCloudLibraryDestination:(BOOL)arg1 ;


@end


#endif