// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPUNARCHIVER_H
#define TSPUNARCHIVER_H

@class NSUUID;
@protocol TSPLazyReferenceDelegate, TSPUnarchiverDelegate, TSPObjectDelegate;

#import <Foundation/Foundation.h>

#import "TSPObjectContext.h"
#import "_TtC13TSPersistence23TSPMutableIdentifierSet.h"
#import "TSPUnknownContent.h"

@interface TSPUnarchiver : NSObject {
    uint8_t _objectClass;
    unique_ptr<google::protobuf::Message, std::default_delete<google::protobuf::Message>> _message;
    unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> _strongReferences;
    id<TSPLazyReferenceDelegate> *_lazyReferenceDelegate;
    vector<TSP::UnarchiverReference, std::allocator<TSP::UnarchiverReference>> _references;
    vector<TSP::UnarchiverRepeatedReference, std::allocator<TSP::UnarchiverRepeatedReference>> _repeatedReferences;
    vector<void (^)(), std::allocator<void (^)()>> _finalizeHandlers;
    *void _currentFieldPath;
}


@property (readonly, nonatomic) BOOL canValidateReferences;
@property (readonly, weak, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) _TtC13TSPersistence23TSPMutableIdentifierSet *dataReferences; // ivar: _dataReferences
@property (readonly, weak, nonatomic) NSObject<TSPUnarchiverDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL documentHasCurrentFileFormatVersion;
@property (readonly, nonatomic) NSUInteger fileFormatVersion;
@property (readonly, nonatomic) BOOL hasAlternateMessages; // ivar: _hasAlternateMessages
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly, nonatomic) BOOL hasPreUFFVersion;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) BOOL isFromCopy;
@property (readonly, nonatomic) unsigned int messageType; // ivar: _messageType
@property (readonly, nonatomic) NSUInteger messageVersion; // ivar: _messageVersion
@property (readonly, nonatomic) Class objectClass;
@property (readonly, weak, nonatomic) NSObject<TSPObjectDelegate> *objectDelegate; // ivar: _objectDelegate
@property (readonly, nonatomic) NSInteger objectIdentifier; // ivar: _objectIdentifier
@property (readonly, nonatomic) NSUUID *objectUUID;
@property (readonly, nonatomic) NSUInteger preUFFVersion;
@property (readonly, nonatomic) NSUInteger readVersion;
@property (readonly, nonatomic) unsigned int sourceType;
@property (readonly, nonatomic) Class unarchiveClass; // ivar: _unarchiveClass
@property (readonly, nonatomic) TSPUnknownContent *unknownContent; // ivar: _unknownContent


+(id)stringForSelector:(SEL)arg0 objectClass:(Class)arg1 ;
-(*void)filterIdentifiers:(*void)arg0 ;
-(*void)finalizeHandlers;
-(*void)references;
-(*void)repeatedReferences;
-(*void)strongReferences;
-(id)initWithMessageType:(unsigned int)arg0 unarchiveClass:(Class)arg1 message:(struct unique_ptr<google::protobuf::Message, std::default_delete<google::protobuf::Message>> )arg2 identifier:(NSInteger)arg3 strongReferences:(struct unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> )arg4 messageVersion:(NSUInteger)arg5 unknownContent:(id)arg6 hasAlternateMessages:(BOOL)arg7 objectDelegate:(id)arg8 lazyReferenceDelegate:(id)arg9 delegate:(id)arg10 ;
-(id)readDataReferenceMessage:(*void)arg0 ;
-(id)readRepeatedWeakObjectUUIDPathReferenceMessage:(*void)arg0 ;
-(id)readRepeatedWeakObjectUUIDPathReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(id)readRepeatedWeakObjectUUIDPathReferenceMessage:(*void)arg0 referenceMessage:(*void)arg1 delegate:(id)arg2 ;
-(id)readRepeatedWeakObjectUUIDReferenceMessage:(*void)arg0 ;
-(id)readRepeatedWeakObjectUUIDReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(id)readRepeatedWeakObjectUUIDReferenceMessage:(*void)arg0 referenceMessage:(*void)arg1 delegate:(id)arg2 ;
-(id)readSparseWeakObjectUUIDPathReferenceArrayMessage:(*void)arg0 ;
-(id)readSparseWeakObjectUUIDReferenceArrayMessage:(*void)arg0 ;
-(id)readWeakObjectUUIDPathReferenceMessage:(*void)arg0 ;
-(id)readWeakObjectUUIDPathReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(id)readWeakObjectUUIDReferenceMessage:(*void)arg0 ;
-(id)readWeakObjectUUIDReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(struct Message *)message;
-(struct Message *)messageWithDescriptor:(*void)arg0 ;
-(struct Message *)p_messageWithDescriptor:(*void)arg0 ;
-(void)addFinalizeHandler:(id)arg0 ;
-(void)dealloc;
-(void)pushScopeForField:(int)arg0 message:(struct Message *)arg1 usingBlock:(id)arg2 ;
-(void)readLazyReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(void)readLazyReferenceMessage:(*void)arg0 completion:(id)arg1 ;
-(void)readLazyReferenceMessage:(*void)arg0 ownershipMode:(NSInteger)arg1 validateStrongReferences:(BOOL)arg2 allowUnknownObject:(BOOL)arg3 class:(Class)arg4 protocol:(id)arg5 validateClass:(BOOL)arg6 selector:(SEL)arg7 delegate:(id)arg8 completion:(id)arg9 ;
-(void)readReferenceMessage1:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 message2:(*void)arg3 class:(Class)arg4 protocol:(id)arg5 completion:(id)arg6 ;
-(void)readReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(void)readReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 repeatedMessage:(*void)arg3 class:(Class)arg4 protocol:(id)arg5 completion:(id)arg6 ;
-(void)readReferenceMessage:(*void)arg0 completion:(id)arg1 ;
-(void)readReferenceMessage:(*void)arg0 isWeak:(BOOL)arg1 validateStrongReferences:(BOOL)arg2 allowUnknownObject:(BOOL)arg3 class:(Class)arg4 protocol:(id)arg5 validateClass:(BOOL)arg6 selector:(SEL)arg7 weakSelector:(SEL)arg8 completion:(id)arg9 ;
-(void)readRepeatedLazyReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(void)readRepeatedLazyReferenceMessage:(*void)arg0 completion:(id)arg1 ;
-(void)readRepeatedLazyReferenceMessage:(*void)arg0 ownershipMode:(NSInteger)arg1 validateStrongReferences:(BOOL)arg2 allowUnknownObject:(BOOL)arg3 class:(Class)arg4 protocol:(id)arg5 validateClass:(BOOL)arg6 selector:(SEL)arg7 delegate:(id)arg8 completion:(id)arg9 ;
-(void)readRepeatedReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(void)readRepeatedReferenceMessage:(*void)arg0 completion:(id)arg1 ;
-(void)readRepeatedReferenceMessage:(*void)arg0 isWeak:(BOOL)arg1 validateStrongReferences:(BOOL)arg2 allowUnknownObject:(BOOL)arg3 class:(Class)arg4 protocol:(id)arg5 validateClass:(BOOL)arg6 selector:(SEL)arg7 completion:(id)arg8 ;
-(void)readRepeatedUnknownLazyReferenceMessage:(*void)arg0 ownershipMode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)readRepeatedUnownedReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(void)readRepeatedUnownedReferenceMessage:(*void)arg0 completion:(id)arg1 ;
-(void)readRepeatedWeakLazyReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(void)readRepeatedWeakLazyReferenceMessage:(*void)arg0 completion:(id)arg1 ;
-(void)readRepeatedWeakReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(void)readRepeatedWeakReferenceMessage:(*void)arg0 completion:(id)arg1 ;
-(void)readSparseReferenceArrayMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(void)readSparseReferenceArrayMessage:(*void)arg0 completion:(id)arg1 ;
-(void)readSparseReferenceArrayMessage:(*void)arg0 isWeak:(BOOL)arg1 class:(Class)arg2 protocol:(id)arg3 validateClass:(BOOL)arg4 selector:(SEL)arg5 completion:(id)arg6 ;
-(void)readSparseWeakReferenceArrayMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(void)readSparseWeakReferenceArrayMessage:(*void)arg0 completion:(id)arg1 ;
-(void)readUnknownLazyReferenceMessage:(*void)arg0 ownershipMode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)readUnownedReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(void)readUnownedReferenceMessage:(*void)arg0 completion:(id)arg1 ;
-(void)readWeakLazyReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(void)readWeakLazyReferenceMessage:(*void)arg0 completion:(id)arg1 ;
-(void)readWeakReferenceMessage1:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 message2:(*void)arg3 class:(Class)arg4 protocol:(id)arg5 completion:(id)arg6 ;
-(void)readWeakReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 completion:(id)arg3 ;
-(void)readWeakReferenceMessage:(*void)arg0 class:(Class)arg1 protocol:(id)arg2 repeatedMessage:(*void)arg3 class:(Class)arg4 protocol:(id)arg5 completion:(id)arg6 ;
-(void)readWeakReferenceMessage:(*void)arg0 completion:(id)arg1 ;
-(void)readWeakReferenceToObjectUUID:(id)arg0 delegate:(id)arg1 class:(Class)arg2 protocol:(id)arg3 selector:(SEL)arg4 completion:(id)arg5 ;
-(void)validateReferenceToObjectIdentifier:(NSInteger)arg0 objectClass:(Class)arg1 isWeak:(*BOOL)arg2 validateStrongReferences:(BOOL)arg3 selector:(SEL)arg4 weakSelector:(SEL)arg5 ;


@end


#endif