// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDEXTERNALMANIFESTREQUESTOPTIONS_H
#define ASDEXTERNALMANIFESTREQUESTOPTIONS_H

@class NSURL;


#import "ASDRequestOptions.h"

@interface ASDExternalManifestRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSURL *manifestURL; // ivar: _manifestURL
@property (nonatomic) BOOL shouldHideUserPrompts; // ivar: _shouldHideUserPrompts


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif