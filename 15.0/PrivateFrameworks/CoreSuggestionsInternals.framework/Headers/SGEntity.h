// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGENTITY_H
#define SGENTITY_H

@class NSMutableSet, NSSet, CSPerson, NSString, SGExtractionInfo, SGRecordId, NSData, SGSimpleTimeRange;

#import <Foundation/Foundation.h>

#import "SGDuplicateKey.h"

@interface SGEntity : NSObject {
    NSMutableSet *_tags;
    NSSet *_tagsSnapshot;
    _opaque_pthread_mutex_t _tagsLock;
}


@property (retain, nonatomic) CSPerson *author; // ivar: _author
@property (copy, nonatomic) NSString *authorNickname; // ivar: _authorNickname
@property (copy, nonatomic) NSString *authorPhotoPath; // ivar: _authorPhotoPath
@property (copy, nonatomic) NSString *content; // ivar: _content
@property (nonatomic) _NSRange contentRangeOfInterest; // ivar: _contentRangeOfInterest
@property (nonatomic) SGUnixTimestamp_ creationTimestamp; // ivar: _creationTimestamp
@property (retain, nonatomic) SGDuplicateKey *duplicateKey; // ivar: _duplicateKey
@property (retain, nonatomic) SGExtractionInfo *extractionInfo; // ivar: _extractionInfo
@property (nonatomic) NSInteger groupId; // ivar: _groupId
@property (nonatomic) SGUnixTimestamp_ lastModifiedTimestamp; // ivar: _lastModifiedTimestamp
@property (retain, nonatomic) NSMutableSet *locations; // ivar: _locations
@property (nonatomic) NSInteger masterEntityId; // ivar: _masterEntityId
@property (copy, nonatomic) NSString *operatingSystemVersion; // ivar: _operatingSystemVersion
@property (nonatomic) CGFloat quality; // ivar: _quality
@property (retain, nonatomic) SGRecordId *recordId; // ivar: _recordId
@property (copy, nonatomic) NSString *sourceKey; // ivar: _sourceKey
@property (nonatomic) unsigned int state; // ivar: _state
@property (copy, nonatomic) NSData *structuredData; // ivar: _structuredData
@property (retain, nonatomic) SGSimpleTimeRange *timeRange; // ivar: _timeRange
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)hasTag:(id)arg0 ;
-(BOOL)isCancelled;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEntity:(id)arg0 ;
-(BOOL)isFromForwardedMessage;
-(BOOL)isInhuman;
-(BOOL)isNaturalLanguageEvent;
-(BOOL)isPartiallyDownloaded;
-(NSUInteger)hash;
-(id)description;
-(id)extraKeyTag;
-(id)fieldsToSaveOnConfirmation;
-(id)init;
-(id)initWithEntity:(id)arg0 ;
-(id)loadOrigin:(id)arg0 ;
-(id)loggingIdentifier;
-(id)tags;
-(id)templateShortName;
-(void)addTag:(id)arg0 ;
-(void)dealloc;
-(void)removeTag:(id)arg0 ;
-(void)validate;


@end


#endif