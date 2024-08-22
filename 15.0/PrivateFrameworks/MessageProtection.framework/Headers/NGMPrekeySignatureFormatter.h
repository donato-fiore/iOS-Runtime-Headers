// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NGMPREKEYSIGNATUREFORMATTER_H
#define NGMPREKEYSIGNATUREFORMATTER_H

@class NSString, NSData;
@protocol SignatureFormatter;

#import <Foundation/Foundation.h>


@interface NGMPrekeySignatureFormatter : NSObject <SignatureFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *prekeyPublic; // ivar: _prekeyPublic
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initToSignKey:(id)arg0 ;
-(id)initWithPublicPrekey:(id)arg0 ;
-(id)signedData;


@end


#endif