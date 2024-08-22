// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCREDENTIALITEM_H
#define ACCREDENTIALITEM_H

@class NSString, NSDate, NSURL, NSSet;
@protocol NSSecureCoding, ACProtobufCoding;

#import <Foundation/Foundation.h>

#import "ACAccountStore.h"

@interface ACCredentialItem : NSObject <NSSecureCoding, ACProtobufCoding>

 {
    NSString *_accountIdentifier;
    NSDate *_expirationDate;
    NSString *_serviceName;
    BOOL _persistent;
    NSURL *_objectID;
}


@property (readonly, nonatomic) NSString *accountIdentifier;
@property (weak, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly, nonatomic) NSSet *dirtyProperties; // ivar: _dirtyProperties
@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *objectID;
@property (nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isPropertyDirty:(id)arg0 ;
-(id)_encodeProtobuf;
-(id)_encodeProtobufData;
-(id)_initWithProtobuf:(id)arg0 ;
-(id)_initWithProtobufData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fullDescription;
-(id)initWithAccountIdentifier:(id)arg0 serviceName:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithManagedCredentialItem:(id)arg0 ;
-(id)initWithManagedCredentialItem:(id)arg0 accountStore:(id)arg1 ;
-(void)_markPropertyDirty:(id)arg0 ;
-(void)clearDirtyProperties;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markAllPropertiesDirty;


@end


#endif