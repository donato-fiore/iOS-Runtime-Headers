// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKLOADCONTACTRESOURCEOPERATION_H
#define GKLOADCONTACTRESOURCEOPERATION_H

@class NSString, CNAvatarImageRenderer;


#import "GKLoadResourceOperation.h"

@interface GKLoadContactResourceOperation : GKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *contactId; // ivar: _contactId
@property (retain, nonatomic) CNAvatarImageRenderer *monogrammer; // ivar: _monogrammer


+(CGFloat)mainScreenScale;
-(id)initWithContactId:(id)arg0 ;
-(id)makeFetchError;
-(void)main;


@end


#endif