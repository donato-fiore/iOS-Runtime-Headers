// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDEBUGLOGMESSAGE_H
#define _UIDEBUGLOGMESSAGE_H

@class NSString, NSAttributedString;

#import <Foundation/Foundation.h>


@interface _UIDebugLogMessage : NSObject {
    NSString *_string;
    NSAttributedString *_attributedString;
}




+(id)messageWithFormat:(id)arg0 ;
+(id)messageWithNewline;
+(id)messageWithPrefix:(id)arg0 color:(id)arg1 string:(id)arg2 ;
+(id)messageWithString:(id)arg0 ;
+(id)messageWithStyle:(NSUInteger)arg0 string:(id)arg1 ;
-(BOOL)_isNode;
-(BOOL)_isTransparent;
-(id)_attributedStringRepresentation;
-(id)_stringRepresentation;
-(id)attributedDescription;
-(id)description;
-(id)initWithString:(id)arg0 attributedString:(id)arg1 ;


@end


#endif