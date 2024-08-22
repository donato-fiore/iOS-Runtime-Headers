// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPERSONALFACT_H
#define BMPERSONALFACT_H

@class NSString, NSArray;
@protocol BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMPersonalFact : NSObject <BMProtoBufWrapper>



@property (readonly, nonatomic) NSString *objectAlias; // ivar: _objectAlias
@property (readonly, nonatomic) NSString *objectId; // ivar: _objectId
@property (readonly, nonatomic) NSString *predicateId; // ivar: _predicateId
@property (readonly, nonatomic) NSString *subjectAlias; // ivar: _subjectAlias
@property (readonly, nonatomic) NSString *subjectId; // ivar: _subjectId
@property (readonly, nonatomic) NSArray *subjectIsa; // ivar: _subjectIsa


-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSubjectId:(id)arg0 subjectAlias:(id)arg1 subjectIsa:(id)arg2 predicateId:(id)arg3 objectId:(id)arg4 objectAlias:(id)arg5 ;
-(id)proto;


@end


#endif