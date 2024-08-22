// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFHMACPSEUDORANDOMFUNCTION_H
#define SFHMACPSEUDORANDOMFUNCTION_H

@class NSString;
@protocol SFPseudoRandomFunction, SFDigestOperation;

#import <Foundation/Foundation.h>


@interface SFHMACPseudoRandomFunction : NSObject <SFPseudoRandomFunction>

 {
    id *_hmacPseudoRandomFunctionInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSObject<SFDigestOperation> *digestOperation;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)generateBytesWithLength:(NSInteger)arg0 key:(id)arg1 error:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDigestOperation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif