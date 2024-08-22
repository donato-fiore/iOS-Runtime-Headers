// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLSHAREABLECONTENTMETADATA_H
#define SLSHAREABLECONTENTMETADATA_H

@class NSString, LPLinkMetadata, NSArray;
@protocol BSXPCSecureCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SLShareableContentMetadata : NSObject <BSXPCSecureCoding, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSArray *registeredTypeIdentifiers; // ivar: _registeredTypeIdentifiers
@property (readonly, copy, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSceneIdentifier:(id)arg0 bundleIdentifier:(id)arg1 registeredTypeIdentifiers:(id)arg2 metadata:(id)arg3 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif