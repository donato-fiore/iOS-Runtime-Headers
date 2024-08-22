// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPERSONENTITY_H
#define BMPERSONENTITY_H

@class NSArray, NSDictionary, NSString;
@protocol BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMPersonEntity : NSObject <BMProtoBufWrapper>



@property (readonly, nonatomic) NSArray *addresses; // ivar: _addresses
@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSString *contactId; // ivar: _contactId
@property (readonly, nonatomic) NSString *customId; // ivar: _customId
@property (readonly, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, nonatomic) NSArray *names; // ivar: _names
@property (readonly, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly, nonatomic) NSArray *socialMediaHandles; // ivar: _socialMediaHandles


-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithNames:(id)arg0 customId:(id)arg1 contactId:(id)arg2 emailAddresses:(id)arg3 addresses:(id)arg4 phoneNumbers:(id)arg5 socialMediaHandles:(id)arg6 attributes:(id)arg7 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;


@end


#endif