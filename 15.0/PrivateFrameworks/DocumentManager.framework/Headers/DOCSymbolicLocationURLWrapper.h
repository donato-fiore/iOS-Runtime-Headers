// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCSYMBOLICLOCATIONURLWRAPPER_H
#define DOCSYMBOLICLOCATIONURLWRAPPER_H

@class FPSandboxingURLWrapper;
@protocol NSCopying, NSSecureCoding;



@interface DOCSymbolicLocationURLWrapper : FPSandboxingURLWrapper <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger symbolicLocation; // ivar: _symbolicLocation


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbolicLocation:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif