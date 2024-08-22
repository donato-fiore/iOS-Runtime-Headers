// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKPUBLICKEYCREDENTIALUSERENTITY_H
#define _WKPUBLICKEYCREDENTIALUSERENTITY_H

@class WKPublicKeyCredentialEntity, NSString, NSData;



@interface _WKPublicKeyCredentialUserEntity : WKPublicKeyCredentialEntity

@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSData *identifier; // ivar: _identifier


-(id)initWithName:(id)arg0 identifier:(id)arg1 displayName:(id)arg2 ;
-(void)dealloc;


@end


#endif