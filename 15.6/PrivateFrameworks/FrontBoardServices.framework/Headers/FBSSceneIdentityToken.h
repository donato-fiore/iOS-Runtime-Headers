// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSSCENEIDENTITYTOKEN_H
#define FBSSCENEIDENTITYTOKEN_H

@class NSString, BSServiceConnectionEndpoint;
@protocol BSXPCSecureCoding, BSXPCCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FBSSceneIdentityToken : NSObject <BSXPCSecureCoding, BSXPCCoding, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *stringRepresentation; // ivar: _stringRepresentation
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *workspaceIdentifier; // ivar: _workspaceIdentifier


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 workspaceID:(id)arg1 endpoint:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif