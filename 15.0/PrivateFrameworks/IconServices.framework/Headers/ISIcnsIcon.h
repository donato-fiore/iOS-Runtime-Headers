// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISICNSICON_H
#define ISICNSICON_H

@class ISIcns, NSData;
@protocol NSSecureCoding;


#import "ISConcreteIcon.h"

@interface ISIcnsIcon : ISConcreteIcon <NSSecureCoding>



@property (readonly) ISIcns *icns;
@property (readonly) NSData *icnsData; // ivar: _icnsData
@property (retain) ISIcns *internalICNS; // ivar: _internalICNS


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentOfURL:(id)arg0 ;
-(id)initWithIcns:(id)arg0 ;
-(id)initWithIcnsData:(id)arg0 ;
-(id)makeResourceProvider;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif