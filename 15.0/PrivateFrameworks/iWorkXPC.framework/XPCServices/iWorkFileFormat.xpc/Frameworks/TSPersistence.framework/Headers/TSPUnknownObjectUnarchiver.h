// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPUNKNOWNOBJECTUNARCHIVER_H
#define TSPUNKNOWNOBJECTUNARCHIVER_H

@class NSString;
@protocol OS_dispatch_data;


#import "TSPUnarchiver.h"

@interface TSPUnknownObjectUnarchiver : TSPUnarchiver {
    shared_ptr<TSP::ArchiveInfo> _archiveInfo;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_data> *messagesData; // ivar: _messagesData
@property (readonly, nonatomic) NSString *packageLocator; // ivar: _packageLocator


-(?)archiveInfo;
-(?)initWithIdentifier:(?)arg0 archiveInfo:(?)arg1 messagesData:(?)arg2 packageLocator:(?)arg3 hasAlternateMessages:(?)arg4 objectDelegate:(?)arg5 lazyReferenceDelegatedelegate;
-(BOOL)canValidateReferences;
-(id)initWithMessageType:(unsigned int)arg0 unarchiveClass:(Class)arg1 message:(struct unique_ptr<google::protobuf::Message, std::default_delete<google::protobuf::Message>> )arg2 identifier:(NSInteger)arg3 strongReferences:(struct unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> )arg4 messageVersion:(NSUInteger)arg5 unknownContent:(id)arg6 hasAlternateMessages:(BOOL)arg7 objectDelegate:(id)arg8 lazyReferenceDelegate:(id)arg9 delegate:(id)arg10 ;
-(struct Message *)message;


@end


#endif