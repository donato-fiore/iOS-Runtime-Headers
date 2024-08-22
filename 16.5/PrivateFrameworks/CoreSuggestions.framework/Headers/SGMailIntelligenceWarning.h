// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMAILINTELLIGENCEWARNING_H
#define SGMAILINTELLIGENCEWARNING_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGMailIntelligenceWarning : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *core; // ivar: _core
@property (readonly, nonatomic) NSString *detectedLanguage; // ivar: _detectedLanguage
@property (readonly, nonatomic) BOOL isIncomingMessage; // ivar: _isIncomingMessage
@property (copy, nonatomic) NSString *messageId; // ivar: _messageId
@property (readonly, nonatomic) NSNumber *score; // ivar: _score
@property (readonly, nonatomic) NSString *signature; // ivar: _signature
@property (readonly, nonatomic) NSString *snippet; // ivar: _snippet
@property (readonly, nonatomic) unsigned char warningType;


+(BOOL)supportsSecureCoding;
+(id)snippetFromString:(id)arg0 coreRange:(struct _NSRange )arg1 withMaxWindowSizeAroundCore:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromString:(id)arg0 coreRange:(struct _NSRange )arg1 signature:(id)arg2 maxWindowSizeAroundCore:(NSUInteger)arg3 detectedLanguage:(id)arg4 isIncomingMessage:(BOOL)arg5 score:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSnippet:(id)arg0 core:(id)arg1 score:(id)arg2 ;
-(id)initWithSnippet:(id)arg0 core:(id)arg1 signature:(id)arg2 detectedLanguage:(id)arg3 isIncomingMessage:(BOOL)arg4 score:(id)arg5 ;
-(id)initWithWarningType:(unsigned char)arg0 messageId:(id)arg1 snippet:(id)arg2 score:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif