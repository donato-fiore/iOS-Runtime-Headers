// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLINTERLIBRARYTRANSFEROPTIONS_H
#define PLINTERLIBRARYTRANSFEROPTIONS_H

@class NSSet, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLInterLibraryTransferOptions : NSObject <NSSecureCoding>



@property unsigned short allowDeleteOfSavedAssetTypes; // ivar: _allowDeleteOfSavedAssetTypes
@property BOOL allowSavedAssetTypeChanges; // ivar: _allowSavedAssetTypeChanges
@property (copy) NSSet *excludedEntityNames; // ivar: _excludedEntityNames
@property BOOL ignoreMissingSourceFiles; // ivar: _ignoreMissingSourceFiles
@property (copy) NSArray *keysForDeDupe; // ivar: _keysForDeDupe
@property BOOL updateExistingObjects; // ivar: _updateExistingObjects


+(BOOL)supportsSecureCoding;
+(id)newTransferOptionsForSyndicationToSystemPhotoLibrary;
-(id)_sortedEntityNamesAsString;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif