// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHOBJECTREFERENCE_H
#define PHOBJECTREFERENCE_H

@class NSString, NSURL, NSArray;
@protocol NSItemProviderWriting, NSItemProviderReading;

#import <Foundation/Foundation.h>


@interface PHObjectReference : NSObject <NSItemProviderWriting, NSItemProviderReading>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *libraryURL; // ivar: _libraryURL
@property (readonly, copy, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (readonly, copy, nonatomic) NSString *representedType; // ivar: _representedType
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(id)filteredObjectReferences:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
+(id)referenceForObject:(id)arg0 ;
-(id)dictionaryForReferenceType:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 referenceType:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg0 libraryURL:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;


@end


#endif