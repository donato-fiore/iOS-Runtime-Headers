// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSPEECHSYNTHESISREQUEST_H
#define SFSPEECHSYNTHESISREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ProsodyTransferData.h"
#import "SFSpeechSynthesisVoice.h"

@interface SFSpeechSynthesisRequest : NSObject

@property (copy, nonatomic) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property (copy, nonatomic) NSString *gender; // ivar: _gender
@property (nonatomic) BOOL isPrivate; // ivar: _isPrivate
@property (copy, nonatomic) NSString *locale; // ivar: _locale
@property (nonatomic) NSInteger phoneSetType; // ivar: _phoneSetType
@property (retain, nonatomic) ProsodyTransferData *prosodyTransferData; // ivar: _prosodyTransferData
@property (copy, nonatomic) NSString *requestIdentifer; // ivar: _requestIdentifer
@property (nonatomic) BOOL returnFrontEndFeature; // ivar: _returnFrontEndFeature
@property (nonatomic) NSInteger solutionType; // ivar: _solutionType
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) BOOL useCache; // ivar: _useCache
@property (weak, nonatomic) SFSpeechSynthesisVoice *voice; // ivar: _voice
@property (copy, nonatomic) NSString *voiceName; // ivar: _voiceName


-(id)description;
-(id)init;


@end


#endif