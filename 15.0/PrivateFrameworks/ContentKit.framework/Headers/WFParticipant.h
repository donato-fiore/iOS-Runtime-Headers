// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPARTICIPANT_H
#define WFPARTICIPANT_H

@class NSURL, NSPredicate, NSString;
@protocol WFNaming, WFSerializableContent;

#import <Foundation/Foundation.h>


@interface WFParticipant : NSObject <WFNaming, WFSerializableContent>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSPredicate *contactPredicate; // ivar: _contactPredicate
@property (readonly, nonatomic, getter=isCurrentUser) BOOL currentUser; // ivar: _currentUser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isManaged) BOOL managed; // ivar: _managed
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger role; // ivar: _role
@property (readonly, copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *wfName;


+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(BOOL)isEquivalentToParticipant:(id)arg0 ;
-(id)initWithEKParticipant:(id)arg0 ;
-(id)initWithURL:(id)arg0 name:(id)arg1 emailAddress:(id)arg2 status:(NSInteger)arg3 role:(NSInteger)arg4 type:(NSInteger)arg5 sourceIdentifier:(id)arg6 isManaged:(BOOL)arg7 isCurrentUser:(BOOL)arg8 contactPredicate:(id)arg9 ;
-(id)wfSerializedRepresentation;


@end


#endif