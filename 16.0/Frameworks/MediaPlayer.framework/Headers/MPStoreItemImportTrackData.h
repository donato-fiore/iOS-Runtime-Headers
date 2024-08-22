// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSTOREITEMIMPORTTRACKDATA_H
#define MPSTOREITEMIMPORTTRACKDATA_H

@class ML3StoreItemTrackData, NSArray;



@interface MPStoreItemImportTrackData : ML3StoreItemTrackData

@property (readonly, nonatomic) NSArray *importElements; // ivar: _importElements


+(id)_importPropertiesDictFromImportMetadataDict:(id)arg0 ;
-(id)_associatedElementForPropertyDict:(id)arg0 ;
-(id)initWithImportElements:(id)arg0 ;
-(id)parsedStoreItemsImportProperties;


@end


#endif