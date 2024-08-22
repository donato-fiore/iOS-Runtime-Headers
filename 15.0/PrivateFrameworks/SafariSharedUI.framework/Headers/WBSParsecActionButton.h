// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPARSECACTIONBUTTON_H
#define WBSPARSECACTIONBUTTON_H

@class WBSParsecModel, NSString, NSArray, NSURL;


#import "WBSParsecImageRepresentation.h"

@interface WBSParsecActionButton : WBSParsecModel

@property (readonly, nonatomic) WBSParsecImageRepresentation *baseIcon; // ivar: _baseIcon
@property (readonly, copy, nonatomic) NSString *completion; // ivar: _completion
@property (readonly, nonatomic, getter=isForAppleMusicResult) BOOL forAppleMusicResult;
@property (readonly, nonatomic, getter=isForStreamingResult) BOOL forStreamingResult; // ivar: _forStreamingResult
@property (readonly, nonatomic) WBSParsecImageRepresentation *icon; // ivar: _icon
@property (readonly, copy, nonatomic) NSString *itunesCompletion; // ivar: _itunesCompletion
@property (readonly, copy, nonatomic) NSArray *itunesContentIdentifiers; // ivar: _itunesContentIdentifiers
@property (readonly, copy, nonatomic) NSString *itunesLabel; // ivar: _itunesLabel
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSString *labelAlignment; // ivar: _labelAlignment
@property (readonly, copy, nonatomic) NSString *mediaKind; // ivar: _mediaKind
@property (readonly, copy, nonatomic) NSString *offerType; // ivar: _offerType
@property (readonly, nonatomic, getter=isOverlay) BOOL overlay; // ivar: _overlay
@property (readonly, copy, nonatomic) NSString *punchoutAppBundleIdentifier; // ivar: _punchoutAppBundleIdentifier
@property (readonly, copy, nonatomic) NSString *punchoutAppName; // ivar: _punchoutAppName
@property (readonly, nonatomic) NSURL *punchoutURL; // ivar: _punchoutURL
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(id)schema;
-(id)initWithDictionary:(id)arg0 mediaKind:(id)arg1 ;


@end


#endif