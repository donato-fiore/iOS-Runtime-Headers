// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUREWRITEMESSAGE_H
#define SIRINLUREWRITEMESSAGE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SIRINLURewriteMessage : NSObject <NSSecureCoding>



@property (nonatomic) int rewriteType; // ivar: _rewriteType
@property (retain, nonatomic) NSString *rewrittenUtterance; // ivar: _rewrittenUtterance


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(int)arg0 utterance:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif