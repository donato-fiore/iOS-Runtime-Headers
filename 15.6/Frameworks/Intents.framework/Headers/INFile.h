// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INFILE_H
#define INFILE_H

@class NSData, NSNumber, NSString, NSURL;
@protocol INEnumerable, INJSONSerializable, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INFile : NSObject <INEnumerable, INJSONSerializable, NSSecureCoding>

 {
    NSData *_memoryMappedFileData;
}


@property (nonatomic, setter=_setAssociatedAuditToken:) ? _associatedAuditToken;
@property (readonly, copy, nonatomic) NSData *_bookmarkData; // ivar: _bookmarkData
@property (nonatomic, setter=_setDeletesFileOnDeallocationIfNeeded:) BOOL _deletesFileOnDeallocationIfNeeded; // ivar: _deletesFileOnDeallocationIfNeeded
@property (readonly, nonatomic) BOOL _hasAssociatedAuditToken;
@property (readonly, nonatomic) BOOL _isFileURLBased;
@property (nonatomic, getter=_isMarkedForDeletionOnDeallocation, setter=_setMarkedForDeletionOnDeallocation:) BOOL _markedForDeletionOnDeallocation;
@property (copy, nonatomic, setter=_setRemovedOnCompletionValue:) NSNumber *_removedOnCompletionValue; // ivar: _removedOnCompletionValue
@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL removedOnCompletion;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
+(id)fileWithData:(id)arg0 filename:(id)arg1 typeIdentifier:(id)arg2 ;
+(id)fileWithFileURL:(id)arg0 filename:(id)arg1 typeIdentifier:(id)arg2 ;
+(void)initialize;
-(BOOL)_associatedAuditTokenIsEqualToAuditToken:(struct ? )arg0 ;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg0 withBlock:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithBookmarkData:(id)arg0 filename:(id)arg1 typeIdentifier:(id)arg2 removedOnCompletion:(id)arg3 ;
-(id)_initWithData:(id)arg0 filename:(id)arg1 fileURL:(id)arg2 typeIdentifier:(id)arg3 removedOnCompletion:(id)arg4 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif