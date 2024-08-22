// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14SIRIKITRUNTIME27CONVERSATIONCANHANDLERESULT_H
#define _TTC14SIRIKITRUNTIME27CONVERSATIONCANHANDLERESULT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC14SiriKitRuntime27ConversationCanHandleResult : NSObject <NSSecureCoding>

 {
    ? directlySupported;
    ? exclude;
    ? reformedInput;
    ? flowIdentifier;
}




+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif