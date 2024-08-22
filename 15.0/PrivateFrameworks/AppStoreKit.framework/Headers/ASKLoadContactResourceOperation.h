// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASKLOADCONTACTRESOURCEOPERATION_H
#define ASKLOADCONTACTRESOURCEOPERATION_H

@class NSString, CNAvatarImageRenderer;


#import "ASKLoadResourceOperation.h"

@interface ASKLoadContactResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *contactId; // ivar: _contactId
@property (retain, nonatomic) CNAvatarImageRenderer *monogrammer; // ivar: _monogrammer


+(CGFloat)mainScreenScale;
+(id)supportedScheme;
-(id)initWithContactId:(id)arg0 ;
-(id)initWithURLRequest:(id)arg0 dataConsumer:(id)arg1 ;
-(id)makeFetchError;
-(id)makePlatformUnsupportedError;
-(void)main;


@end


#endif