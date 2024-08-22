// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPAUDIOBOOKCOLLECTION_H
#define SAMPAUDIOBOOKCOLLECTION_H

@class NSString;


#import "SAMPCollection.h"

@interface SAMPAudiobookCollection : SAMPCollection

@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *sortArtist;


+(id)audiobookCollection;
+(id)audiobookCollectionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif