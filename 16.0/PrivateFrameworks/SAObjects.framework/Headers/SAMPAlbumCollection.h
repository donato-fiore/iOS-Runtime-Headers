// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMPALBUMCOLLECTION_H
#define SAMPALBUMCOLLECTION_H

@class NSString;


#import "SAMPCollection.h"

@interface SAMPAlbumCollection : SAMPCollection

@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic) NSString *sortArtist;


+(id)albumCollection;
+(id)albumCollectionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif