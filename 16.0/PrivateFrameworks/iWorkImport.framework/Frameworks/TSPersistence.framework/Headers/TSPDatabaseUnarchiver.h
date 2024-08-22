// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDATABASEUNARCHIVER_H
#define TSPDATABASEUNARCHIVER_H



#import "TSPUnarchiver.h"

@interface TSPDatabaseUnarchiver : TSPUnarchiver

@property (readonly, nonatomic) NSUInteger preUFFVersion; // ivar: _databaseVersion


-(*void)filterIdentifiers:(*void)arg0 ;
-(BOOL)canValidateReferences;
-(id)initWithMessageType:(unsigned int)arg0 unarchiveClass:(Class)arg1 message:(struct unique_ptr<google::protobuf::Message, std::default_delete<google::protobuf::Message>> )arg2 identifier:(NSInteger)arg3 strongReferences:(struct unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> )arg4 databaseVersion:(NSUInteger)arg5 objectDelegate:(id)arg6 lazyReferenceDelegate:(id)arg7 delegate:(id)arg8 ;
-(id)initWithMessageType:(unsigned int)arg0 unarchiveClass:(Class)arg1 message:(struct unique_ptr<google::protobuf::Message, std::default_delete<google::protobuf::Message>> )arg2 identifier:(NSInteger)arg3 strongReferences:(struct unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> )arg4 messageVersion:(NSUInteger)arg5 unknownContent:(id)arg6 hasAlternateMessages:(BOOL)arg7 objectDelegate:(id)arg8 lazyReferenceDelegate:(id)arg9 delegate:(id)arg10 ;


@end


#endif