// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INMEDIASEARCH_H
#define INMEDIASEARCH_H

@class NSArray, NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INDateComponentsRange.h"

@interface INMediaSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *activityNames;
@property (readonly, copy, nonatomic) NSString *albumName; // ivar: _albumName
@property (readonly, copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *genreNames; // ivar: _genreNames
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *mediaIdentifier; // ivar: _mediaIdentifier
@property (readonly, copy, nonatomic) NSString *mediaName; // ivar: _mediaName
@property (readonly, nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (readonly, copy, nonatomic) NSArray *moodNames; // ivar: _moodNames
@property (readonly, nonatomic) NSInteger reference; // ivar: _reference
@property (readonly, copy, nonatomic) INDateComponentsRange *releaseDate; // ivar: _releaseDate
@property (readonly, nonatomic) NSInteger sortOrder; // ivar: _sortOrder
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaType:(NSInteger)arg0 sortOrder:(NSInteger)arg1 mediaName:(id)arg2 artistName:(id)arg3 albumName:(id)arg4 genreNames:(id)arg5 moodNames:(id)arg6 releaseDate:(id)arg7 reference:(NSInteger)arg8 mediaIdentifier:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif