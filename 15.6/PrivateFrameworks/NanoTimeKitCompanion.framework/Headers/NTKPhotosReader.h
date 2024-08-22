// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKPHOTOSREADER_H
#define NTKPHOTOSREADER_H

@class NSString;
@protocol NSFastEnumeration, NTKPhotosReaderDelegate;

#import <Foundation/Foundation.h>


@interface NTKPhotosReader : NSObject <NSFastEnumeration>



@property (retain, nonatomic) NSString *assetCollectionIdentifier; // ivar: _assetCollectionIdentifier
@property (readonly, nonatomic) NSUInteger count;
@property (weak, nonatomic) NSObject<NTKPhotosReaderDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger mutationCount; // ivar: _mutationCount
@property (readonly, nonatomic) NSString *resourceDirectory; // ivar: _resourceDirectory


+(id)readerForMemoriesWithResourceDirectory:(id)arg0 ;
+(id)readerForResourceDirectory:(id)arg0 ;
+(id)readerForSyncedAlbumWithResourceDirectory:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)firstObject;
-(id)initWithResourceDirectory:(id)arg0 ;
-(id)lastObject;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;


@end


#endif