// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCTAGSETTINGSENTRY_H
#define FCTAGSETTINGSENTRY_H

@class NSString, CKRecord, NSNumber;

#import <Foundation/Foundation.h>


@interface FCTagSettingsEntry : NSObject

@property (readonly, copy, nonatomic) NSString *accessToken; // ivar: _accessToken
@property (readonly, nonatomic) CKRecord *asCKRecord;
@property (readonly, copy, nonatomic) NSNumber *contentScale; // ivar: _contentScale
@property (readonly, copy, nonatomic) NSNumber *contentScaleMacOS; // ivar: _contentScaleMacOS
@property (readonly, copy, nonatomic) NSNumber *fontMultiplier; // ivar: _fontMultiplier
@property (readonly, copy, nonatomic) NSNumber *fontMultiplierMacOS; // ivar: _fontMultiplierMacOS
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *tagID; // ivar: _tagID
@property (readonly, nonatomic) BOOL webAccessOptIn; // ivar: _webAccessOptIn


-(id)initWithEntryID:(id)arg0 tagID:(id)arg1 fontMultiplier:(id)arg2 fontMultiplierMacOS:(id)arg3 contentScale:(id)arg4 contentScaleMacOS:(id)arg5 accessToken:(id)arg6 webAccessOptIn:(BOOL)arg7 ;


@end


#endif