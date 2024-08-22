// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSHAREDAPPLETSUBCREDENTIALSMANIFESTITEM_H
#define PKSHAREDAPPLETSUBCREDENTIALSMANIFESTITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKSharedAppletSubcredentialsManifestItem : NSObject

@property (readonly, nonatomic) NSInteger entitlement; // ivar: _entitlement
@property (readonly, nonatomic, getter=isForWatch) BOOL forWatch; // ivar: _forWatch
@property (readonly, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger rawState; // ivar: _rawState
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif