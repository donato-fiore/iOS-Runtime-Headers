// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMENTIONSUTILITIES_H
#define CKMENTIONSUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKMentionsUtilities : NSObject



+(BOOL)metionedHandleMatchesMeCard:(id)arg0 ;
+(BOOL)supportsSupplementalLexiconMentions;
+(id)attributedStringByHighlightingMentionsInAttributedString:(id)arg0 withFont:(id)arg1 textColor:(id)arg2 mentionFont:(id)arg3 mentionColor:(id)arg4 ;


@end


#endif