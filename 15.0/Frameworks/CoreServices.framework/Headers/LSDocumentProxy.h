// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSDOCUMENTPROXY_H
#define LSDOCUMENTPROXY_H

@class NSString, NSURL;
@protocol NSSecureCoding;


#import "LSResourceProxy.h"

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding>

 {
    ? _sourceAuditToken;
}


@property (readonly, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *containerOwnerApplicationIdentifier;
@property (readonly, nonatomic, getter=isContentManaged) BOOL contentManaged; // ivar: _isContentManaged
@property (readonly, getter=isImageOrVideo) BOOL imageOrVideo;
@property (readonly, nonatomic) *? managedSourceAuditToken;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) *? sourceAuditToken;
@property (readonly, nonatomic) BOOL sourceIsManaged;
@property (readonly, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier


+(BOOL)supportsSecureCoding;
+(id)documentProxyForName:(id)arg0 type:(id)arg1 MIMEType:(id)arg2 ;
+(id)documentProxyForName:(id)arg0 type:(id)arg1 MIMEType:(id)arg2 isContentManaged:(BOOL)arg3 sourceAuditToken:(struct ? *)arg4 ;
+(id)documentProxyForName:(id)arg0 type:(id)arg1 MIMEType:(id)arg2 managedSourceAuditToken:(struct ? *)arg3 ;
+(id)documentProxyForName:(id)arg0 type:(id)arg1 MIMEType:(id)arg2 sourceIsManaged:(BOOL)arg3 ;
+(id)documentProxyForURL:(id)arg0 ;
+(id)documentProxyForURL:(id)arg0 isContentManaged:(BOOL)arg1 sourceAuditToken:(struct ? *)arg2 ;
+(id)documentProxyForURL:(id)arg0 managedSourceAuditToken:(struct ? *)arg1 ;
+(id)documentProxyForURL:(id)arg0 sourceIsManaged:(BOOL)arg1 ;
-(id)_boundIconInfo;
-(id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(*id)arg0 ;
-(id)applicationsAvailableForOpeningFromAirDropWithError:(*id)arg0 ;
-(id)applicationsAvailableForOpeningWithError:(*id)arg0 ;
-(id)applicationsAvailableForOpeningWithHandlerRanks:(id)arg0 error:(*id)arg1 ;
-(id)applicationsAvailableForOpeningWithStyle:(unsigned char)arg0 limit:(NSUInteger)arg1 XPCConnection:(id)arg2 error:(*id)arg3 ;
-(id)applicationsOrClaimBindings:(BOOL)arg0 availableForOpeningWithStyle:(unsigned char)arg1 handlerRank:(id)arg2 limit:(NSUInteger)arg3 XPCConnection:(id)arg4 error:(*id)arg5 ;
-(id)availableClaimBindingsForMode:(unsigned char)arg0 error:(*id)arg1 ;
-(id)availableClaimBindingsForMode:(unsigned char)arg0 handlerRank:(id)arg1 error:(*id)arg2 ;
-(id)availableClaimBindingsReturningError:(*id)arg0 ;
-(id)claimBindingsAvailableForOpeningWithStyle:(unsigned char)arg0 handlerRank:(id)arg1 limit:(NSUInteger)arg2 XPCConnection:(id)arg3 error:(*id)arg4 ;
-(id)debugDescription;
-(id)description;
-(id)iconDataForVariant:(int)arg0 withOptions:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 name:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 isContentManaged:(BOOL)arg4 sourceAuditToken:(struct ? *)arg5 ;
-(id)uniqueIdentifier;
-(struct optional<LaunchServices::BindingEvaluator> )_bindingEvaluatorWithAuditToken:(struct ? *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif